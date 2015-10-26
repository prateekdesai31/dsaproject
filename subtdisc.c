#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"market.h"

// THIS FUNCTION CANNOT CHANGED NY THE ADMINISTRATOR OR THE CUSTOMER

float ret_disprice( market m ) {
    return (m.price - m.discount);
}
