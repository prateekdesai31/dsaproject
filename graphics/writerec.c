#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"market.h"
#include<ncurses.h>

// WRITE THE PRODUCT INTO A FILE CALLED MARKET.DAT
market accept() {
	
	initscr();
	cbreak();
	market m;
	printw("\n Please Enter The Product ID : ");
   	scanw("%d",&m.pno);
    	printw("\n Enter The Product Name : ");
   	scanw("%s",m.name);
   	printw("\n Enter The Price Of The Product : ");
    	scanw("%f",&m.price);
	return m;
	endwin();
}

void write_product() { 

	initscr();
	cbreak();
    FILE *fp;
    market m;
    int n, i;
    fp = fopen("nesnasmarket","a+b");
    if( fp!= NULL ){
        printw( "\n Enter The Number Of Products You Want To Add In The System : " );
        scanw( "%d", &n );
        for( i= 0; i < n; i++){
           
		m = accept();
            	fwrite(&m,sizeof(market),1,fp);
        }
    }
    else {
        printw("\n UNABLE TO OPEN FILE. ");
    }
    printw("\n The Stock Is Now Updated. ");
    fclose(fp);

	getch();
	endwin();
}
