DD/MM/YYYY
31/03/2014
-Merged with dfengine v1.08f for all its nice features such as fast loading.
-Added fs_include so you can put your pk3's and files in a separate directory
	fs_include "baseq3/pk3Dir" will load from baseq3/pk3Dir folder so its independent from fs_game
-Added "Total startup time: %5.3f seconds." to WinMain() since some people want to know.
27/03/2014
-Changed con_clockColor to con_clkcolor; default is 940
-Added con_clktoggle <1 or 0>; default is 1
-Added timestamps to console output
08/02/2014
-Added clock to console edit line.
-Can edit color with con_clockColor <rgb>. Each channel can be an integer 0-9.