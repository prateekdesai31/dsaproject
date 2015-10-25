#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct market {

    int pno, qty;
    char name[50];
    float price, discount, tax, disprice;

}market;

void createprod() {

    market m;
    printf("\n Please Enter The Product ID : ");
    scanf("%d",&m.pno);
    printf("\n Enter The Product Name : ");
    scanf("%s",m.name);
    printf("\n Enter The Price Of The Product : ");
    scanf("%f",&m.discount);
}


void showprod() {

    market m;
    printf("\n The Product No. Of The Product : %d ",m.pno);
    printf("\n The Name Of The Product : ");
    printf("\t");
    puts(m.name);
    printf("\n The Original Price Of The Product Is : %f ",m.price);
    m.discount = ret_discount(m.price);
    if( m.discount == 0) {
        printf("\n WE'RE SORRY THE BILL IS TOO LOW FOR DISCOUNT TO BE APPLIED !");
    }
        else {
        printf("\n The Discount Is : %f ",m.discount);
        m.disprice = ret_disprice(m.price,m.discount);
        printf("\n The Discounted Price Is : %f ",m.disprice);
        }

}                                                              // MODIFICATION TO BE DONE !!!!!!!!!!!!!!

float ret_discount( float price ) {

    float dis = 0;
    if( price >= 100 && price < 500 ) {
        dis = price*(0.1);

    }
    else
        if( price >= 500 && price < 1500 ) {
        dis = price*(0.2);
    }
        else
            if( price >= 1500 ) {
                dis = price*(0.3);
            }
    return(dis);
}


float ret_disprice( float price , float discount ) {
    return (price - discount);
}

void write_product() {  // THIS FUNCTION DEPENDS ON CREATE PRODUCT AFTER CREATE PRODUCT WE WRITE IT INTO THIS, SO BASICALLY NO NEED TO CALL CREATE PRODUCT

    FILE *fp;
    market m;
    int n, i;
    fp = fopen( "nesnasmarket.dat", "a+b" );
    if( fp!= NULL ){
        printf( "\n Enter The Number Of Products You Want To Add In The System. " );
        scanf( "%d", &n );
        for( i= 0; i < n; i++){
            createprod();
            fwrite(&m,sizeof(market),1,fp);
        }
    }
    else {
        printf("\n UNABLE TO OPEN FILE. ");
    }
    printf("\n The Stock Is Now Updated. ");
    fclose(fp);
}

void readall_product() {

    FILE *fp;
    market m;
    printf("\n Displaying All Records .");
    fp = fopen("nesnasmarket.dat", "rb");
    if(fp == NULL ) {
        printf("\n UNABLE TO OPEN FILE. ");
    }
    else {
        while( fp != EOF ) {
            fread(&m,sizeof(market),1,fp);
            showprod();
        }
    }

    fclose(fp);
 }

int main()  // THIS IS BASICALLY ADMIN MENU ONLY IT CURRENTLY DOES TWO JOBS 1. CALL WRITE_PRODUCT 2.CALL READALL_PRODUCT
{
	char ch;
	do
	{

        printf("\n 1 For Accept ");
        printf("\n 2 For Display ");
        printf("\n 3 EXIT.");
        printf("\n Select -> ");
        ch = getchar();

        switch(ch)
            {
                case '1': write_product();
                    break;

                case '2': readall_product();
                    break;
            }

    }while(ch != '3');

}
