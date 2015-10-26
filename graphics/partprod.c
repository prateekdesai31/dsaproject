#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"
#include<ncurses.h>

void part_prod() {

	initscr();
	cbreak();
	FILE *fp;
	fp = fopen("nesnasmarket","r+b");
	market m;
	char str[50];
	int ch, num, flag;
	printw("\n Display A Particular Product On The Basis Of\n 1.Product Number. \n 2.Product Name.");
	printw("\n Enter Choice --> ");
	scanw("%d",&ch);
	flag = 0;

	switch(ch) {
		case 1: {
				//printf("\n Searching On The Basis Of Product Number. ");
				printw("\n Enter The Product Number --> ");
				scanw("%d",&num);
				while( fread(&m,sizeof(market),1,fp) ) {
					if( m.pno == num ) {
						showprod(m);
						flag = 1;
					}
				}
			}
		break;

		case 2: {
				printw("\n Searching On The Basis Of Product Name. ");
				printw("\n Enter The Product Name --> ");
				scanw("%s",str);
				while( fread(&m,sizeof(market),1,fp) ) {
					if( strcmp(m.name,str) == 0) {
						showprod(m);
						flag = 1;
					}
				}
			}
		break;

	} //END OF SWITCH

	if( flag == 0 )
		printw("\n PRODUCT NOT FOUND \n");
	fclose(fp);
	getch();
	endwin();

}	// END OF PART_PROD







		
			
	
