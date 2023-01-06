/*TO FIND AREA AND PERIMETER OF CIRCLE AND RECTANGLE*/

#include<stdio.h>
#define pi 3.14

float Area_Circle(float);
float Perimeter_Circle(float);
float Area_Rectangle(float,float);
float Perimeter_Rectangle(float,float);

void main()
{
	float Radius,Length,Breadth;
	printf("Enter the radius of circle\n");
	scanf("%f",&Radius);
	printf("\nEnter the Length and breadth of rectangle\n");
	scanf("%f%f",&Length,&Breadth);
 	printf("\nArea of circle having %.2f radius =%.2f\n",Radius,Area_Circle(Radius));
	printf("\nPerimeter of Circle having %.2f radius =%.2f\n",Radius,Perimeter_Circle(Radius));
	printf("\nArea of rectangle having length=%.2f and breadth=%.2f =%.2f\n",Length,Breadth, Area_Rectangle(Length,Breadth));
	printf("\nPerimeter of rectangle having length=%.2f and breadth=%.2f =%.2f\n",Length,Breadth,Perimeter_Rectangle(Length,Breadth));

}
float Area_Circle(float R)
{
	return(pi * R * R);
}
float Perimeter_Circle(float R)
{
	return(2 * pi * R);
}
float Area_Rectangle(float L,float B)
{
	return(L * B);
}
float Perimeter_Rectangle(float L,float B)
{
	return(2 * (L + B));
}

