/*Reads the records form nesnasmarket.dat
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


// READ ALL THE FILES FROM MARKET.DAT

 void readall_product() {

    FILE *fp;
    market m;
    printf("\n Displaying All Records .");
    fp = fopen("nesnasmarket","rb");
    if(fp == NULL ) {
        printf("\n UNABLE TO OPEN FILE. ");
    }
        while( fread(&m,sizeof(market),1,fp) )
            showprod(m);

    fclose(fp);
 }
