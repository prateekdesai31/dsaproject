#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

// THIS IS ALSO AND  ADMIN FUNCTION

void showprod(market m) {		//THIS IS CALLED BY THE READ FUNC THATS WHY IT NEEDS M

    printf("\n The Product No. Of The Product : %d ",m.pno);
    printf("\n The Name Of The Product : %s",m.name);
    printf("\n The Original Price Of The Product Is : %f ",m.price);
    m.discount = ret_discount(m);
    if( m.discount == 0) {
        printf("\n WE'RE SORRY THE BILL IS TOO LOW FOR DISCOUNT TO BE APPLIED !");
    }
    else {
        printf("\n The Discount Is : %f ",m.discount);
        m.disprice = ret_disprice(m);
        printf("\n The Discounted Price Is : %f ",m.disprice);
    }

}                                                              // MODIFICATION TO BE DONE !!!!!!!!!!!!!!
