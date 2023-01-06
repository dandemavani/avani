#include<stdio.h>

void main()
{
	float val=0.4330,side,area;
	printf("Enter one side of an equilateral triangle\n");
	scanf("%f",&side);
	area=val * side * side;
	printf("Area of equilateral triangle is %.2f\n",area);
}
