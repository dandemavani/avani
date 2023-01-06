#include<stdio.h>

void main()
{
	int a=0;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a>0)
		printf("%d is a POSITIVE number\n",a);
	else
		printf("%d is a NEGATIVE number\n",a);
}
