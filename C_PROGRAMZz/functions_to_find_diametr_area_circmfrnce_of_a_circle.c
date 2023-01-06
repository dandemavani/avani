/*TO FIND DIAMETER,AREA AND CIRCUMFERENCE OF A CIRCLE*/

#include<stdio.h>
#define pi 3.14

float Diameter(float);
float Area(float);
float Circumference(float);

void main()
{
	float Radius;
	printf("Enter the Radius\n");
	scanf("%f",&Radius);
	printf("\nYou entered radius=%.2f \n Diameter =%.2f \n Area =%.2f \n Circumferenc =%.2f \n",Radius,Diameter(Radius),Area(Radius),Circumference(Radius));
}

float Diameter(float Rds)
{
	return(2 * Rds);
}
float Area(float Rds)
{
	return(pi * Rds * Rds);
}
float Circumference(float Rds)
{
	return(2 * pi * Rds);
}
