#include<stdio.h>

void main()
{
	float P,R,T,SI;
	printf("Enter PRINCIPLE AMOUNT,NUMBER OF YEARS,RATE OF INTEREST accordingly\n");
	scanf("%f%f%f",&P,&T,&R);
	SI=(P * T * R)/100;
	printf("SIMPLE INTEREST=%.2f",SI);
}
