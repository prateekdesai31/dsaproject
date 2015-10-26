#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"
#include<ncurses.h>

void mod_rec() {	//try to take a pararmeter
	
	initscr();
	cbreak();
	market m;
	FILE *fp;
	fp = fopen("nesnasmarket","r+b");
	char str[50];
	int num, flag;
	int ch;
	printw("\n Enter The Basis You Want To Modify On \n 1.Product ID. \n 2.Product Name. ");
	scanw("%d",&ch);
	flag = 0;

	switch(ch) {
		case 1: {
				printw("\n Enter The Product No. Of The Record You Want To Modify : ");
				scanw("%d",&num);
				while( fread(&(m),sizeof(m),1,fp) ) {
					if( num == m.pno ) {
					//printf("reached here\n");
						fseek(fp,(-1) * sizeof(market), SEEK_CUR);
						printw("\n Please Enter The Product ID : ");
	   					scanw("%d",&m.pno);
	    					printw("\n Enter The Product Name : ");
	   					scanw("%s",m.name);
	   					printw("\n Enter The Price Of The Product : ");
						scanw("%f",&m.price);
						fwrite(&m,sizeof(market),1,fp);
						flag = 1;
					
					}
				}
			}		
					break;

		case 2: {
				//printf("\n REACHED HERE");
				printw("\n Enter The Product Name Of The Record You Want To Modify. ");
				scanw("%s",str);
				while( fread(&(m),sizeof(m),1,fp) ) {
					if( strcmp(m.name,str) == 0 ) {
						fseek(fp,(-1) * sizeof(market), SEEK_CUR);
						printw("\n Please Enter The Product ID : ");
	   					scanw("%d",&m.pno);
	    					printw("\n Enter The Product Name : ");
	   					scanw("%s",m.name);
	   					printw("\n Enter The Price Of The Product : ");
						scanw("%f",&m.price);
						fwrite(&m,sizeof(market),1,fp);
						flag = 1;
					
					}
				}
			}	
			break;
					
	} //END OF SWITCH

	if( flag == 1 )
		printw("\n UPDATION DONE .\n");
	else
		printw("\n RECORD NOT FOUND .\n");

	fclose(fp);
	getch();
	endwin();
}


