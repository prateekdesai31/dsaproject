/*Deletes records form nesnasmarket.dat
    Copyright (C) 2015 Prateek Desai

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

void del_rec() {
	market m;
	FILE *fp;
	FILE *tmp;
	int num, flag, ch;
	char str[50];
	fp = fopen("nesnasmarket","rb");
	tmp = fopen("tempmarket","a+b");

	printf("\n Enter The Basis For Searching Of A Record To Be Deleted . ");
	printf("\n 1.Product Number. \n 2.Product Name. \n Enter Choice --> ");
	scanf("%d",&ch);

	switch(ch){
		case 1:{
			printf("\n Deleting Using Product No. ");
			printf("\n Enter Product No. --> ");
			scanf("%d",&num);
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
			printf("\n Deleting Using Product Name. ");
			printf("\n Enter The Name Of The Record --> ");
			scanf("%s",str);
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
		printf("\n RECORD NOT FOUND. ");

	fclose(fp);
	fclose(tmp);
	remove("nesnasmarket");
	rename("tempmarket","nesnasmarket");

} // END OF DEL_REC












