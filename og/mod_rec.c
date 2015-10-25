#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

void mod_rec() {	//try to take a pararmeter
	
	market m;
	FILE *fp;
	fp = fopen("nesnasmarket","r+b");
	
	int num;
	printf("\n Enter The Product Number Of The Record You Want To Modify : ");
	scanf("%d",&num);
	while( fread(&(m),sizeof(m),1,fp) ) {
		if( num == m.pno ) {
			printf("reached here\n");
			
			fseek(fp,(-1) * sizeof(market), SEEK_CUR);
			printf("\n Please Enter The Product ID : ");
	   		scanf("%d",&m.pno);
	    		printf("\n Enter The Product Name : ");
	   		scanf("%s",m.name);
	   		printf("\n Enter The Price Of The Product : ");
			scanf("%f",&m.price);
			fwrite(&m,sizeof(market),1,fp);
			break;
		}
	}

	printf("\n Updation Done .");
	fclose(fp);
}


