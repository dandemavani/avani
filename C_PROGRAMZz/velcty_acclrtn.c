#include<stdio.h>
#define HALF 0.5

void main()
{
	float Time1,Time2,Tot_Time,Distance,Velocity,Accelaration;
	printf("Enter the Velocity,Acceleration,STARTING time and STOPPING time accordingly\n");
	scanf("%f%f%f%f",&Velocity,&Accelaration,&Time1,&Time2);
	Tot_Time=Time1 - Time2;
	Distance=(Velocity * Tot_Time) +((Accelaration * Tot_Time * Tot_Time)/(HALF));
	printf("Distance= %.2fMtrs\n",Distance);
}

	

