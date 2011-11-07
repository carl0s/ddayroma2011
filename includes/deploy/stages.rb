desc "deploy to production environment"
task :development do
  set :stage_name, "development"
  set :application, "dev.drupalday.it"
  set :deploy_to,  "/var/apps/#{application}"
  set :repository,  "git@github.com:twinbit/ddayroma2011.git"
  set :branch, "dev"
  
  role :web, "188.40.59.145:8888", :primary => true
  role :db, "188.40.59.145:8888", :primary => true, :no_release => true

  # Remote Drush
  set :remote_drush, "cd #{current_path}; sudo /home/deploy/bin/drush"

  # SSH Configurations
  set :user, "deploy"
  set :use_sudo, false

  # Drupal domains (keep "default" domain or at least one domain to use)
  set :domains, ["roma"]
  
  # Specify which domain needs to be used as default (optional)
  set :default_domain, "roma"
  
  # create virtual host symlinks
  set :virtual_host, ["dev.drupalday.it"]
end

desc "deploy to production environment"
task :production do
  set :stage_name, "production"
  set :application, "roma2011.drupalday.it"
  set :deploy_to,  "/var/apps/#{application}"
  set :repository,  "git@github.com:twinbit/ddayroma2011.git"
  set :branch, "master"
  
  role :web, "188.40.59.145:8888", :primary => true
  role :db, "188.40.59.145:8888", :primary => true, :no_release => true

  # Remote Drush
  set :remote_drush, "cd #{current_path}; sudo /home/deploy/bin/drush"

  # SSH Configurations
  set :user, "deploy"
  set :use_sudo, false

  # Drupal domains (keep "default" domain or at least one domain to use)
  set :domains, ["roma"]
  
  # Specify which domain needs to be used as default (optional)
  set :default_domain, "roma"
  
  # create virtual host symlinks
  set :virtual_host, ["roma2011.drupalday.it"]
end

