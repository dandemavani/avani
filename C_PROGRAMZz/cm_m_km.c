#include<stdio.h>

void main()
{
	float cm;
	double mts,kmts;
	printf("Enter the length in centimeters\n");
	scanf("%f",&cm);
	mts=cm / 100;
	kmts=cm / 100000;
	printf("%.2fcm is %lfMeters\n",cm,mts);
	printf("%.2fcm is %lfKilometers\n",cm,kmts);
}
