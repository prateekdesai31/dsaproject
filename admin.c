#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"market.h"

int main()  // THIS IS BASICALLY ADMIN MENU ONLY IT CURRENTLY DOES TWO JOBS 1. CALL WRITE_PRODUCT 2.CALL READALL_PRODUCT
{
	char ans, ch;
	do
	{

        printf("\n 1 For Accept ");
        printf("\n 2 For Display ");
	printf("\n 3 For Displaying Particular Record ");
	printf("\n 4 For Modificaton");
	printf("\n 5 For Deletion");
        printf("\n 6 EXIT.");
        printf("\n Select -> ");
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
            }	// END OF SWITCH

    }while( ch != '6' );

}
