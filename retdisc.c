/*Returns discount of product
    Copyright (C) 2015 Prateek Desai

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

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
