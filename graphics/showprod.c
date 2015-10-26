#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

// THIS IS ALSO AND  ADMIN FUNCTION

void showprod(market m) {		//THIS IS CALLED BY THE READ FUNC THATS WHY IT NEEDS M
	
	initscr();
	cbreak();
	
	printw("\n\n");
	printw("\n The Product No. Of The Product : %d ",m.pno);
	printw("\n The Name Of The Product : %s",m.name);
	printw("\n The Original Price Of The Product Is : %f ",m.price);
	printw("\n\n");
  
	getch();
	endwin();
}
