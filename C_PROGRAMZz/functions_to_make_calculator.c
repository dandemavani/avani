/*TO MAKE CALCULATOR USING FUNCTION*/

#include<stdio.h>
#include<stdlib.h>

int add(int,int);
int diff(int,int);
int prod(int,int);
int divi(int,int);
int rem(int,int);
int fact(int);
int pwr(int,int);

void main()
{
	int Nmbr_1,Nmbr_2;
	int Choice;
	printf("Enter the two numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	printf("\n 1-ADDITION \n 2-SUBSTRACTION \n 3-MULTIPLY \n 4-DIVIDE \n 5-REMAINDER \n 6-FACTORIAL \n 7-POWER\n");
	printf("\nEnter your choice accordingly from above list\n");
	scanf("%d",&Choice);
	switch(Choice)
	{
		case 1:
			printf("Sum of %d and %d =%d\n",Nmbr_1,Nmbr_2,add(Nmbr_1,Nmbr_2));
			break;
		case 2:
			printf("Difference of %d and %d =%d\n",Nmbr_1,Nmbr_2,diff(Nmbr_1,Nmbr_2));
			break;
		case 3:
			printf("Product of %d and %d =%d\n",Nmbr_1,Nmbr_2,prod(Nmbr_1,Nmbr_2));
                        break;
		case 4:
			printf("Quotient of %d and %d =%d\n",Nmbr_1,Nmbr_2,divi(Nmbr_1,Nmbr_2));
                        break;
		case 5:
			printf("Remainder of %d and %d =%d\n",Nmbr_1,Nmbr_2,rem(Nmbr_1,Nmbr_2));
                        break;
		case 6:	
			printf("Factorial of %d  =%d\n",Nmbr_1,fact(Nmbr_1));
                        break;
		case 7:
			printf("Power of %d^%d =%d\n",Nmbr_1,Nmbr_2,pwr(Nmbr_1,Nmbr_2));
                        break;
		default:
			printf("\nInvalid selection\n");
			exit(0);
	}
}

int add(int A,int B)
{
	return(A + B);
}

int diff(int A,int B)
{
	return(A - B);
}
int prod(int A,int B)
{
	return( A * B);
}

int divi(int A,int B)
{
	return(A / B);
}

int rem(int A,int B)
{
	return( A % B);
}

int fact(int A)
{
	int i,fctl;
	for(i=A;i>=1;i--)
	{
		fctl = fctl * i;
	}
	return(fctl);
}
int pwr(int A,int B)
{
	int i, p = 1;
	for(i=1;i<=B;i++)
	{
		p = p * A;
	}
	return(p);
}





