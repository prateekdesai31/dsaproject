#include<ncurses.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"market.h"

int main()  // THIS IS BASICALLY ADMIN MENU ONLY IT CURRENTLY DOES TWO JOBS 1. CALL WRITE_PRODUCT 2.CALL READALL_PRODUCT
{
	int row, col;
	initscr();
	cbreak();

	start_color();
	init_pair(1,COLOR_RED,COLOR_YELLOW);
	attron(COLOR_PAIR(1));
	attron(A_BOLD);
	mvprintw(5,5,"WELCOME TO NESNAS SUPERMARKET");
	attroff(COLOR_PAIR(1));
	char ans, ch;
	do
	{

        printw("\n 1 For Accept ");
        printw("\n 2 For Display ");
	printw("\n 3 For Displaying Particular Record ");
	printw("\n 4 For Modificaton");
	printw("\n 5 For Deletion");
        printw("\n 6 EXIT.");
        printw("\n Select -> ");
        scanw("%c",&ch);

        switch(ch)
            {
                case '1': write_product();
			break;

                case '2': readall_product();
			break;
		
		case '3':part_prod();
			break;

		case '4':mod_rec();
			break;

		case '5':del_rec();
			break;
            }	// END OF SWITCH

    }while( ch != '6' );
	attroff(A_BOLD);
	getch();
	endwin();
}
