#include<stdio.h>

void main()
{		/*10 20 30 40 50 60 70*/
/*	int L_Lmt,Init;
	L_Lmt = 70;
	for(Init = 10;  Init <= L_Lmt;  Init = Init + 10)
	{
		printf("%d\t",Init);
	}
*/

		/* -10 -20 -30 -40 -50 -60 -70*/
/*	int L_Lmt,Init;
	L_Lmt = -70;
	for(Init = -10;  Init >= L_Lmt;  Init = Init - 10)
	{
		printf("%d\t",Init);
	}
*/

			/* 1 11 111 1111 11111*/	
/*	int Init,Sum;
	Sum = 0;
	for(Init = 1; Init <= 5;  Init++)
	{
		Sum = (Sum * 10) + 1;
		printf("%d\t",Sum);
	}
*/
			/* 1 2 4 7 11 16*/
/*	int Init,Sum;
	Sum = 1;
	for(Init = 0;  Init <= 5;  Init++ )
	{
		Sum = Sum + Init;
		printf("%d\t",Sum);
	}
*/
			/* 10 7 4 1 -2 -5*/
/*	int Init;
	for(Init = 10;  Init >= -5;  Init =Init - 3)
	{
		printf("%d\t",Init);
	}
*/

 
	int Init;
	for(Init = 1;  Init <= 32;  Init = Init * 2)
	{
		printf("%d\t",Init);
	}	
}
