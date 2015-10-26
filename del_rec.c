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

<<<<<<< HEAD
	if( flag != 1 )
		printf("\n RECORD NOT FOUND.\n\n ");
=======
	if( flag == 0 )
		printf("\n RECORD NOT FOUND. ");
>>>>>>> 04fb0dd554674dedba20d87c00478c663593a6d7

	fclose(fp);
	fclose(tmp);
	remove("nesnasmarket");
	rename("tempmarket","nesnasmarket");

} // END OF DEL_REC

	
	






			


