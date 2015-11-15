/*main administrator function for supermarket
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
#include<stdlib.h>
#include<string.h>
#include"market.h"

int main()  // THIS IS BASICALLY ADMIN MENU ONLY IT CURRENTLY DOES TWO JOBS 1. CALL WRITE_PRODUCT 2.CALL READALL_PRODUCT
{
	char ans, ch;
	printf("\n------------------------------------------");
	printf("\n\t*Welcome To NesNas Supermarket*\t |\n");
	printf("------------------------------------------");
	printf("\n ADMIN MENU\t\t\t\t |\n");
	do
	{
	printf("------------------------------------------");
    printf("\n 1 For Accept \t\t\t\t |");
    printf("\n 2 For Display \t\t\t\t |");
	printf("\n 3 For Displaying Particular Record\t | ");
	printf("\n 4 For Modificaton \t\t\t |");
	printf("\n 5 For Deletion \t\t\t |");
    printf("\n 6 EXIT.\t\t\t\t |");
	printf("\n------------------------------------------");
        printf("\n\n Select -> ");
        scanf("%c",&ch);

        switch(ch)
            {
                case '1': write_product();
			break;

                case '2': readall_product();
			break;

		case '3':part_prod();
			break;

		case '4':mod_rec();
			break;

		case '5':del_rec();
			break;

		default: printf("\n INVALID OPERATION \n");
            }	// END OF SWITCH

    }while( ch != '6' );

}
