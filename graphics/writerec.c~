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
    printf("\n The Stock Is Now Updated. ");
    fclose(fp);
}
