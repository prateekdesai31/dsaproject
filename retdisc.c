#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"market.h"

// THIS FUNCTION CANNOT BE MODIFIED BY BOTH THE ADMINSTRATOR OR THE CUSTOMER

float ret_discount( market m ) {

    //float dis = 0;
    if( m.price >= 100 && m.price < 500 ) {
        m.discount = m.price*(0.1);
	
    }
    else
        if( m.price >= 500 && m.price < 1500 ) {
        m.discount = m.price*(0.2);

    }
        else
            if( m.price >= 1500 ) {
                m.discount = m.price*(0.3);
		
            }
    return(m.discount);
}
