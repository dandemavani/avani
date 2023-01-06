#include<stdio.h>

void main()
{
	int Limit,Num,Sum=0;
        printf("Enter the limit\n");
	scanf("%d",&Limit);
	for(Num=1;Num<=Limit;Num++)
	{
		if(Num % 2 !=0)
		{
			Sum=Sum + Num * Num;
		}
	}
	printf("Sum=%d\n",Sum);
}

