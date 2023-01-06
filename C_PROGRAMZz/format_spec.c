#include<stdio.h>

void main()
{
	int num,temp,rev=0,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("REVERSE OF %d is %d\n",temp,rev);
}
