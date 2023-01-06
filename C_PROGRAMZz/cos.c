/*TO FIND COS OF GIVEN ANGLE*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int Temp,I,N,Dnmtr;
	float Angle,Acrcy,Cosx,Cos_Val,Term,X;
	printf("Enter the Angle in degrees\n");
	scanf("%f",&Angle);
	Temp = Angle;
	Angle = Angle * ( 3.14 / 180);	
	Cos_Val = cos(Angle);
	printf("By Library Functions:Cos%d = %f\n",Temp,Cos_Val);
	printf("Enter the accuracy you need\n");
	scanf("%f",&Acrcy);
	Term = X = Angle;
	Cosx = 1;
	N = 2;
	do
	{
		Dnmtr = 1;
		for(I = N; I >= 1; I--)
		{
			Dnmtr = Dnmtr * I;
		}
		Term = (-Term * X * X) / Dnmtr;
		Cosx = Cosx + Term;
		N = N + 2;
	}while(Acrcy <= fabs(Cos_Val - Cosx));
	printf("By Calculation,Cos%d = %f\n",Temp,Cosx);


}
