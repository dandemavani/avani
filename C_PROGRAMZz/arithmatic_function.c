#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int modulo(int,int);
void main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("SUM OF %d and %d is %d\n",a,b,sum(a,b));
	printf("DIFFERENCE OF %d and %d is %d\n",a,b,sub(a,b));
	printf("MULTIPLICATION OF %d and %d is %d\n",a,b,mul(a,b));
	printf("DIVISION OF %d and %d is %d\n",a,b,div(a,b));
	printf("MODULO DIVISION OF %d and %d is %d\n",a,b,modulo(a,b));
}

int sum(int x,int y)
{
	return(x+y);
}
int sub(int x,int y)
{
	return(x-y);
}
int mul(int x,int y)
{
	return(x*y);
}
int div(int x,int y)
{
	return(x/y);
}
int modulo(int x,int y)
{
	return(x%y);
}


