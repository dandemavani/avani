/*TO CHECK WHETHER NUMBER CAN BE EXPRESSED AS SUM OF TWO PRIME NUMBERS*/

#include<stdio.h>

void Prime_Check(int);

void main()
{
	int Nmbr;
	printf("Enter the Number you want to check\n");
	scanf("%d",&Nmbr);
	Prime_Check(Nmbr);
}

void Prime_Check(int Num)
{
	int A[10],Temp,Count,Flag=0,i,j,k,m;
	for(i=1;i<=Num;i++)
	{
		Temp = i;
		Count = 0;
		for(j=1;j<=Temp;j++)
		{
			if(Temp % j == 0)
			{
				Count++;
			}
		}
		if(Count == 2)
		{
			A[k] = Temp;
			k++;
			Flag++;
		}
	}
	for(k=0;k<Flag;k++)
	{
		for(m=k+1;m<Flag;m++)
		{
			if((A[k] + A[m]) == Num)
			{
				printf("%d + %d = %d\n",A[k],A[m],Num);
			}
		}
	}

}

			
