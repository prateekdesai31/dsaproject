#include<ncurses.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

void del_rec() {

	initscr();
	cbreak();
	market m;
	FILE *fp;
	FILE *tmp;
	int num, flag, ch;
	char str[50];
	fp = fopen("nesnasmarket","rb");
	tmp = fopen("tempmarket","a+b");

	printw("\n Enter The Basis For Searching Of A Record To Be Deleted . ");
	printw("\n 1.Product Number. \n 2.Product Name. \n Enter Choice --> ");
	scanw("%d",&ch);

	switch(ch){
		case 1:{
			printw("\n Deleting Using Product No. ");
			printw("\n Enter Product No. --> ");
			scanw("%d",&num);
			while( fread(&m,sizeof(market),1,fp) ) {
				if( m.pno == num ) {
					showprod(m);
					printf("\n This Record Is DELETED ! ");
					flag = 1;
				}
				else {
					fwrite(&m,sizeof(market),1,tmp);
				}
			} // END OF WHILE
			} // END OF CASE 1
		break;

		case 2:{
			printw("\n Deleting Using Product Name. ");
			printw("\n Enter The Name Of The Record --> ");
			scanw("%s",str);
			while( fread(&m,sizeof(market),1,fp) ) {
				if( strcmp(m.name,str) == 0 ) {
					showprod(m);
					printf("\n This Record Is DELETED ! ");
					flag = 1;
				}
				else {
					fwrite(&m,sizeof(market),1,tmp);
				}
			} // END OF WHILE 
			} // END OF CASE 2

		break;

	} // END OF SWITCH CASE

	if( flag == 0 )
		printw("\n RECORD NOT FOUND. ");

	fclose(fp);
	fclose(tmp);
	remove("nesnasmarket");
	rename("tempmarket","nesnasmarket");
	getch();
	endwin();

} // END OF DEL_REC

	
	






			


