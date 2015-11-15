/*Writerec writes records in nesnasmarket file.
    Copyright (C) 2015  Prateek Desai

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
#include<stdlib.h>
#include<string.h>
#include"market.h"

// WRITE THE PRODUCT INTO A FILE CALLED MARKET.DAT
market accept() {
    market m;
	printf("\n Please Enter The Product ID : ");
   	scanf("%d",&m.pno);
    printf("\n Enter The Product Name : ");
   	scanf("%s",m.name);
   	printf("\n Enter The Price Of The Product : ");
    scanf("%f",&m.price);
    printf("\n Enter The Quantity : ");
    scanf("%d",&m.qty);
	return m;
}

void write_product() {

    FILE *fp;
    market m;
    int n, i;
    fp = fopen("nesnasmarket","a+b");
    if( fp!= NULL ){
        printf( "\n Enter The Number Of Products You Want To Add In The System : " );
        scanf( "%d", &n );
        for( i= 0; i < n; i++){

		m = accept();
            	fwrite(&m,sizeof(market),1,fp);
        }
    }
    else {
        printf("\n UNABLE TO OPEN FILE. ");
    }
    printf("\n The Stock Is Now Updated. \n\n ");
    fclose(fp);
}
