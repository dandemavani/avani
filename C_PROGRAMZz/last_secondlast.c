#include<stdio.h>

void main()
{
	int a=0,ls=0,ss=0,temp;
	printf("Enter a number\n");
	scanf("%d",&a);
	temp=a;
	ls=a%10;
	a=a/10;
	printf("LAST DIGIT OF %d is %d\n",temp,ls);
	ss=a%10;
	printf("SECOND LAST DIGIT OF %d is %d\n",temp,ss);
}
