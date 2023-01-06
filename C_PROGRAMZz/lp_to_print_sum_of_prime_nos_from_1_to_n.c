/*TO FIND SUM OF PRIME NUMBERS FROM 1 TO N*/

#include<stdio.h>

void main()
{
	int L_Lmt,Sum,S_Lmt,Temp_1,Temp,Init,Count;
	S_Lmt = 1;
	Sum = 0;
	printf("Enter the Last Limit\n");
	scanf("%d",&L_Lmt);
	Temp_1 = L_Lmt;
	while(L_Lmt >= S_Lmt)
	{
		Init = 1;
		Temp = L_Lmt;
		Count = 0;
		while(Init <= Temp)
		{
			if(Temp % Init == 0)
			{
				Count++;
			}
			Init++;
		}
		if(Count == 2)
		{
			printf("%d\t",Temp);
			Sum = Sum + Temp;
		}
		L_Lmt--;
	}
	printf("\nSum of Prime Numbers from %d to %d is %d\n",S_Lmt,Temp_1,Sum);
}


