			/* SWAPPING USING 3rd VARIABLE*/
#include<stdio.h>

void main()
{
/*	int Nmbr_1,Nmbr_2,Temp;
	printf("Enter two numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	printf("BEFORE SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
	Temp = Nmbr_1;
	Nmbr_1 = Nmbr_2;
	Nmbr_2 = Temp;
	printf("AFTER SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
*/


			/*SWAPPING USING + AND - OPERATORS*/

/*	int Nmbr_1,Nmbr_2;
	printf("Enter two numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	printf("BEFORE SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
	Nmbr_1 = Nmbr_1 + Nmbr_2;
	Nmbr_2 = Nmbr_1 - Nmbr_2;
	Nmbr_1 = Nmbr_1 - Nmbr_2;
	printf("AFTER SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
*/
			/*SWAPPING USING BITWISE EX-OR OPERATOR*/

/*	int Nmbr_1,Nmbr_2;
	printf("Enter two number\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	printf("BEFORE SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
	Nmbr_1 = (Nmbr_1 ^ Nmbr_2);
	Nmbr_2 = Nmbr_1 ^ Nmbr_2;
	Nmbr_1 = Nmbr_1 ^ Nmbr_2;
	printf("AFTER SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);	
*/

			/*SWAPPING USING * AND / OPERATORS */

/*	int Nmbr_1,Nmbr_2;
        printf("Enter two number\n");
        scanf("%d%d",&Nmbr_1,&Nmbr_2);
        printf("BEFORE SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
	Nmbr_1 = Nmbr_1 * Nmbr_2;
	Nmbr_2 = Nmbr_1 / Nmbr_2;
	Nmbr_1 = Nmbr_1 / Nmbr_2;
	printf("AFTER SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
*/

			/* SWAPPING USING BITWISE OR ,EX-OR OPERATORS*/

	int Nmbr_1,Nmbr_2;
        printf("Enter two number\n");
        scanf("%d%d",&Nmbr_1,&Nmbr_2);
        printf("BEFORE SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);
        Nmbr_1 = Nmbr_1 | Nmbr_2;
        Nmbr_2 = Nmbr_1 ^ Nmbr_2;
        Nmbr_1 = Nmbr_1 ^ Nmbr_2;
        printf("AFTER SWAPPING\n Number_1 = %d \t Number_2 = %d\n",Nmbr_1,Nmbr_2);


}
