#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct market {

    int pno, qty;
    char name[50];
    float price, discount, tax, disprice;

}market;

void createprod() {

    printf("\n Please Enter The Product ID : ");
    scanf("%d",&pno);
    printf("\n Enter The Product Name : ");
    gets(name);
    printf("\n Enter The Price Of The Product : ");
    scanf("%f",discount);
}

void showprod() {

    printf("\n The Product No. Of The Product : %d ",pno);
    printf("\n The Name Of The Product : ");
    printf("\t");
    puts(name);
    printf("\n The Original Price Of The Product Is : %f ",price);
    dicount = ret_discount(price);
    if( discount == 0) {
        printf("\n WE'RE SORRY THE BILL IS TOO LOW FOR DISCOUNT TO BE APPLIED !")
    }
        else {
        printf("\n The Discount Is : %f ",discount);
        disprice = ret_disprice(price,dicount);
        printf("\n The Discounted Price Is : %d ",disprice);
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
            if( price => 1500 ) {
                dis = price*(0.3);
            }
    return(dis);
}                                                           // ENTER THE NAJM CARD CONDITION ALSO

float ret_disprice( float price , float discount ) {
    return (price - discount);
}





