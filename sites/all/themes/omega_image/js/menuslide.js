(function ($) {


	$(document).ready(
	    function()
	    {
	            $('#pull').click(	function()	{	$('nav ul').slideToggle(); 
		    									}   
    							);
    							
    			$(window).resize(function(){  var w = $(window).width();  
											  
											  if(w > 600 && menu.is(':hidden')) {  
											        menu.removeAttr('style');  
											    	}  
												}); 				
											}
	);

})(jQuery);




