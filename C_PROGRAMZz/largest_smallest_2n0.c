#include<stdio.h>

void main()
{
	int a=0,b=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("In between %d and %d...%d is the LARGEST NUMBER\n",a,b,a);
	else
		printf("In between %d and %d...%d is the LARGEST NUMBER\n",a,b,b);
}
