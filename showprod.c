/*Displays the product from nesnasmarket.dat
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

// THIS IS ALSO AND  ADMIN FUNCTION

void showprod(market m) {		//THIS IS CALLED BY THE READ FUNC THATS WHY IT NEEDS M

	printf("\n\n");
	printf("\n The Product No. Of The Product : %d ",m.pno);
	printf("\n The Name Of The Product : %s",m.name);
	printf("\n The Original Price Of The Product Is : %f ",m.price);
	printf("\n Quantity Remaining : %d ",m.qty);
	printf("\n\n");

}
