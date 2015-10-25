#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"market.h"


// READ ALL THE FILES FROM MARKET.DAT

 void readall_product() {

    FILE *fp;
    market m;
    printf("\n Displaying All Records .");
    fp = fopen("nesnasmarket","r");
    if(fp == NULL ) {
        printf("\n UNABLE TO OPEN FILE. ");
    }
      while( fread(&m, sizeof(market), 1, fp) ) {
            showprod(m);
          // printf("pno : %d", m.pno);
        }
    
    fclose(fp);
 }
