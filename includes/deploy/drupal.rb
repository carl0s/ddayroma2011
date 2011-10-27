namespace :drupal do
  desc "Create files dir for each domain"
  task :setup, :except => { :no_release => true } do
     dirs = [deploy_to, releases_path, shared_path]
     domains.each do |domain|
       dirs += [shared_path + "/#{domain}/files"]
     end
     dirs += %w(system).map { |d| File.join(shared_path, d) }
     run "umask 02 && mkdir -p #{dirs.join(' ')}"
  end

  desc "Symlink files dir from shared path to latest release path"
  task :symlink, :except => { :no_release => true } do
     domains.each do |domain|
        # recreate domain file directory
        run "mkdir -p #{shared_path}/files";
        run "rm -rf #{latest_release}/sites/#{domain}/files"
        run "ln -s #{shared_path}/#{domain}/files #{latest_release}/sites/#{domain}/files"
        run "ln -nfs #{release_path}/sites/#{domain}/settings.#{stage_name}.php #{release_path}/sites/#{domain}/settings.php"
     end
  end
  


  desc "Remove git repository"
  task :remove_git_directories, :roles => [:web] do
    run "rm -rfd #{release_path}/.git"
    run "rm #{release_path}/.gitignore"
  end

  desc "Fix htaccess"
  task :htaccess, :roles => [:web] do
    run "mv #{release_path}/htaccess #{release_path}/.htaccess"
  end
  
  desc "Robots"
   task :robots, :roles => [:web] do
  #  if File.exists?("#{latest_release}/robots.txt-#{stage_name}")
      run "mv #{release_path}/robots.txt-#{stage_name} #{release_path}/robots.txt"
      run "rm -rf #{release_path}/robots.txt-*"
  #  end
  end

  desc "Default directory"
  task :default_dir, :roles => [:web] do
    if default_domain
      run "ln -nfs #{release_path}/sites/#{default_domain}  #{release_path}/sites/default"
    else 
      run "ln -s #{release_path}/sites/default-#{stage_name} #{release_path}/sites/default"
      run "ln -nfs #{release_path}/sites/default-#{stage_name}/settings.#{stage_name}.php #{release_path}/sites/default-#{stage_name}/settings.php"
    end
  end
  
  desc "Create symlink for virtualhost"
  task :virtualhost, :roles => [:web] do
    if virtual_host && default_domain
      virtual_host.each do |alias_domain|
          run "ln -s #{release_path}/sites/#{default_domain} #{release_path}/sites/#{alias_domain}"
       end
    end
  end
  
end
