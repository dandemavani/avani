/*TO PRINT NATURAL NUMBER FROM 1 TO N*/

#include<stdio.h>

void Natural_Nmbrs(int,int);

void main()
{
	int L_Lmt,U_Lmt;
	printf("Enter the lower and upper limit\n");
	scanf("%d%d",&L_Lmt,&U_Lmt);
	Natural_Nmbrs(L_Lmt,U_Lmt);
}

void Natural_Nmbrs(int LL,int UL)
{
	if(LL <= UL)
	{
		printf("%d\t",LL);
		Natural_Nmbrs((LL+1),UL);
	}
}
