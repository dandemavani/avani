#include<stdio.h>

void main()
{
	float celsius,fhrht;
	printf("Enter temperature in celsius\n");
	scanf("%f",&celsius);
	fhrht=(1.8  * celsius) + 32;
	printf("%.2f degree celsius is %.2f degree fahrenheit\n",celsius,fhrht);
}
