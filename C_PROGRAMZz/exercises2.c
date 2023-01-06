#include<stdio.h>

void main()
{
	int a,b,sum=1;
	printf("enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++)
	{
		sum=++a;

	}
	printf("sum=%d\n",sum);
}
