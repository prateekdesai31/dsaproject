#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"market.h"
#include<ncurses.h>

// THIS FUNCTION CANNOT CHANGED NY THE ADMINISTRATOR OR THE CUSTOMER

float ret_disprice( market m ) {
	
	initscr();
	cbreak();
    return (m.price - m.discount);
	endwin();
}
