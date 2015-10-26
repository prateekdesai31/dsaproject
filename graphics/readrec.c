#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"market.h"
#include<ncurses.h>


// READ ALL THE FILES FROM MARKET.DAT

 void readall_product() {

	initscr();
	cbreak();
    FILE *fp;
    market m;
    printw("\n Displaying All Records .");
    fp = fopen("nesnasmarket","rb");
    if(fp == NULL ) {
        printw("\n UNABLE TO OPEN FILE. ");
    }
        while( fread(&m,sizeof(market),1,fp) ) 
            showprod(m);

    fclose(fp);
	getch();
	endwin();
 }
