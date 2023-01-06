#include<stdio.h>

void main()
{
/*	int a=10,k,m,n;
	k=a++ + ++a;
	printf("%d\t",k);
	k=a++ + a++;
	printf("%d\t",k);
	k=++a + ++a;
	printf("%d\t",k);
	k=++a + a++;
	printf("%d\t",k);
	*/


	int a=5,k;
	k=a++ + a++;
	printf("k=%d \t a=%d\n",k,a);
	k=++a + ++a;
	printf("k=%d \t a=%d\n",k,a);
	k=a++ + ++a;
	printf("k=%d \t a=%d\n",k,a);
	k=++a + a++;
	printf("k=%d \t a=%d\n",k,a);
}
