#include<stdio.h>

void main()
{
	int a1,a2,a3;
	printf("Enter the two angles of a triangle\n");
	scanf("%d%d",&a1,&a2);
	a3=180-(a1+a2);
	printf("Third Angle of triangle is %d\n",a3);
}


