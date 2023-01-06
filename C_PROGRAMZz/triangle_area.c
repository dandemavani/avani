#include<stdio.h>

void main()
{
	float base,height,area;
	printf("Enter the base and height of a triangle accordingly\n");
	scanf("%f%f",&base,&height);
	area=0.5 * base * height;
	printf("Area of triangle =%.2f\n",area);
}

