#include<ncurses.h>


int main()
{
	int row,col;
	initscr();
	cbreak();
	getmaxyx(stdscr,row,col);
	mvprintw(row/2,col/2,"HELLO WORLD");

	getch();
	endwin();

	return 0;
}

	
