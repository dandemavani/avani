#include<stdio.h>

void main()
{
	int num1,num2,sum=0,diff=0,mul=0,modulo=0;
	float div;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	sum=num1 + num2;
	printf("SUM OF %d and %d is %d\n",num1,num2,sum);
	diff=num1 - num2;
	printf("DIFFERENCE OF %d and %d is %d\n",num1,num2,diff);
	mul=num1 *num2;
	printf("PRODUCT OF %d and %d is %d\n",num1,num2,mul);
	div=num1 / num2;
	printf("QUOTIENT OF %d and %d is %.2f\n",num1,num2,div);
	modulo=num1 % num2;
	printf("REMAINDER OF %d and %d is %d\n",num1,num2,modulo);
}
