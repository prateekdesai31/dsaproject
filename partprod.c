#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

void part_prod() {
	FILE *fp;
	fp = fopen("nesnasmarket","r+b");
	market m;
	char str[50];
	int ch, num, flag;
	printf("\n Display A Particular Product On The Basis Of\n 1.Product Number. \n 2.Product Name.");
	printf("\n Enter Choice --> ");
	scanf("%d",&ch);
	flag = 0;

	switch(ch) {
		case 1: {
				//printf("\n Searching On The Basis Of Product Number. ");
				printf("\n Enter The Product Number --> ");
				scanf("%d",&num);
				while( fread(&m,sizeof(market),1,fp) ) {
					if( m.pno == num ) {
						showprod(m);
						flag = 1;
					}
				}
			}
		break;

		case 2: {
				printf("\n Searching On The Basis Of Product Name. ");
				printf("\n Enter The Product Name --> ");
				scanf("%s",str);
				while( fread(&m,sizeof(market),1,fp) ) {
					if( strcmp(m.name,str) == 0) {
						showprod(m);
						flag = 1;
					}
				}
			}
		break;

	} //END OF SWITCH

	if( flag == 0 )
		printf("\n PRODUCT NOT FOUND \n");

}	// END OF PART_PROD







		
			
	
