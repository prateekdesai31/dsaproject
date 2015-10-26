#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

// THIS IS AN ADMINISTRATOR FUNCTION

void createprod(market m) {

    //market m;
    printf("\n Please Enter The Product ID : ");
    scanf("%d",&m.pno);
    printf("\n Enter The Product Name : ");
    scanf("%s",m.name);
    printf("\n Enter The Price Of The Product : ");
    scanf("%f",&m.discount);
}
