#include<stdio.h>
#define pi 3.14
void main()
{
	float rad,diam,crfe,area;
	printf("Enter radius of circle\n");
	scanf("%f",&rad);
	diam=2*rad;
	area=pi *rad *rad;
	crfe=2 * pi * rad;
	printf("DIAMETER OF CIRCLE having %.2f radius is %.2f\n",rad,diam);
	printf("AREA OF CIRCLE having %.2f radius is %.2f\n",rad,area);
	printf("CIRCUMFERENCE OF CIRCLE having %.2f radius is %.2f\n",rad,crfe);
}

