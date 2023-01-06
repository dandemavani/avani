/*TO CHECK ENTERED NUMBER IS ODD OR EVEN*/

#include<stdio.h>

int Number(int);

void main()
{
	int Nmbr,X;
	printf("Enter the number\n");
	scanf("%d",&Nmbr);
	X = Number(Nmbr);
	if(X == 0)
	{
		printf("%d is Even \n",Nmbr);
	}
	else
	{
		printf("%d is Odd \n",Nmbr);
	}

}
int Number(int Num)
{
	if(Num % 2 == 0)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
