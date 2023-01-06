/* TO FIND SIN VALUE WITH PROVIDED ACCURACY*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int Temp,N,I,Dnmtr;
	float Sinx,Sin_val,Term,X,Angle,Acrcy;
	printf("Enter the angle in degree's\n");
	scanf("%f",&Angle);
	Temp = Angle;
	Angle = (Angle) * (3.14 / 180);
	Sin_val = sin(Angle);
	printf("BY Library Function:Sin%d = %f\n",Temp,Sin_val);
	printf("Enter the accuracy you need\n");
	scanf("%f",&Acrcy);
	X = Term = Angle;
	Sinx = Term;
	N = 3;
	do
	{
		Dnmtr = 1;
		for(I = N; I >= 1;I--)
		{
			Dnmtr = Dnmtr * I;
		}
		Term = (-Term * X * X) / Dnmtr;
		Sinx = Sinx + Term;
		N = N + 2;
	}while(Acrcy <= fabs(Sin_val - Sinx));
	printf("By Calculation:Sin%d = %f\n",Temp,Sinx);

}

