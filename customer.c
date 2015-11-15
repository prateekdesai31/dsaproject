/*displays product information and calculates bill.
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
#include<stdlib.h>
#include<string.h>
#include"market.h"

void customer()
{
    // Show the list of the products available
    // type the name of the product
    // type the quantity of the product
    // the final result to be displayed is the bill
    // the quantity must be subtracted
    char pname[50], ans;
    int cqty, flag;
    float bill;
    FILE *fp;
    FILE *f1;
    float cost;
    market m;
    flag = 0;
    cost = 0;
    do {
        printf("\n Displaying All Products Available .");
        fp = fopen("nesnasmarket","rb");
        if(fp == NULL ) {
            printf("\n UNABLE TO OPEN FILE. ");
        }
        while( fread(&m,sizeof(market),1,fp) )
            showcust(m);

        fclose(fp);

        printf("\n Enter The Product Name You Want To Purchase : ");
        scanf("%s",pname);
        printf("\n Enter The Quantity Of The Product : ");
        scanf("%d",&cqty);

        f1 = fopen("nesnasmarket","rb");
        if(f1 = NULL) {
            printf("\n UNABLE TO OPEN THE FILE. ");
        }

        while( fread(&m,sizeof(market),1,f1) ) {
            if( strcmp(m.name,pname) == 0 ) {
            cost = cost + m.price;
            flag = 1;
            }
        }

        if( flag == 0)
            printf("\ Product Not Found . ");

        printf("\n Press Enter To Continue .")
        getchar();
        printf("\n Continue Order ? ");
        scanf("%c",&ans);
    }while( ans == 'y' || ans == 'Y' );// continue option should be there

    bill = calbil(cqty);// display the bill using the bill function




}
