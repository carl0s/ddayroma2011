(function ($){
	$(document).ready(function(){
		
		/**
		 * This function attaches the behavior for the my drupal day block
		 */
		 
		/* Initially hidden */
		$('.my-dday-container').hide();
		
		/* Clicking on objects with the class my-dday-opener it displays the block*/
		$(".my-dday-opener").click(
			function (){
				$('.my-dday-container').show();
			}
		);
		
		/* It hides the block on mouse out*/
		$('.my-dday-container').mouseout(
			function (){
				$('.my-dday-container').hide();
			}
		);
	});
}(jQuery));