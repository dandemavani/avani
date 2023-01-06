#include<stdio.h>

void main()
{
	float fhrht,celsius;
	printf("Enter temperature in Fahrenheit\n");
	scanf("%f",&fhrht);
	celsius=(0.55) * (fhrht - 32);
	printf("%.2f FAHRENHEIT is %.2f in DEGREE CELSIUS\n",fhrht,celsius);
}
