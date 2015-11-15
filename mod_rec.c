/*modifies records in nesnasmarket.dat
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

void mod_rec() {	//try to take a pararmeter

	market m;
	FILE *fp;
	fp = fopen("nesnasmarket","r+b");
	char str[50];
	int num, flag;
	int ch;
	printf("\n Enter The Basis You Want To Modify On \n 1.Product ID. \n 2.Product Name. ");
	scanf("%d",&ch);
	flag = 0;

	switch(ch) {
		case 1: {
				printf("\n Enter The Product No. Of The Record You Want To Modify : ");
				scanf("%d",&num);
				while( fread(&(m),sizeof(m),1,fp) ) {
					if( num == m.pno ) {
					//printf("reached here\n");
						fseek(fp,(-1) * sizeof(market), SEEK_CUR);
						printf("\n Please Enter The Product ID : ");
	   					scanf("%d",&m.pno);
                        printf("\n Enter The Product Name : ");
	   					scanf("%s",m.name);
	   					printf("\n Enter The Price Of The Product : ");
						scanf("%f",&m.price);
						printf("\n Enter The Quantity : ");
						scanf("%d",&m.qty);
						fwrite(&m,sizeof(market),1,fp);
						flag = 1;

					}
				}
			}
					break;

		case 2: {
				//printf("\n REACHED HERE");
				printf("\n Enter The Product Name Of The Record You Want To Modify. ");
				scanf("%s",str);
				while( fread(&(m),sizeof(m),1,fp) ) {
					if( strcmp(m.name,str) == 0 ) {
						fseek(fp,(-1) * sizeof(market), SEEK_CUR);
						printf("\n Please Enter The Product ID : ");
	   					scanf("%d",&m.pno);
	    					printf("\n Enter The Product Name : ");
	   					scanf("%s",m.name);
	   					printf("\n Enter The Price Of The Product : ");
						scanf("%f",&m.price);
						fwrite(&m,sizeof(market),1,fp);
						flag = 1;

					}
				}
			}
			break;

	} //END OF SWITCH

	if( flag == 1 )
		printf("\n UPDATION DONE .\n");
	else
		printf("\n RECORD NOT FOUND .\n");

	fclose(fp);
}


