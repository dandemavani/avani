/*TO FIND ROOTS OF A QUADRATIC EQUATION USING SWITCH*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	float R_1,R_2,Real,Img,Dt;
	int a,b,c;
	printf("Enter three coefficients of a quadratic equation\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a == 0)
	{
		printf("Roots are not existing\n");
		exit(0);
	}
	else
	{
		Dt = (b*b) - (4 * a * c);
		switch(Dt > 0)
		{
			case 1:
				R_1 = (-b + sqrt(Dt)) / (2.0 * a);
				R_2 = (-b - sqrt(Dt)) / (2.0 * a);
				printf("Root are Real and Different \n Root1 = %.2f \t Root2 = %.2f\n",R_1,R_2);
				break;
			case 0:
				switch(Dt < 0)
				{
					case 1:
						Real = (-b) / (2.0 * a);
						Img = sqrt(-Dt) / (2.0 * a);
						printf("Root are Complex \n Root1 = %.2f + i%.2f \t Root2 = %.2f - i%.2f\n",Real,Img,Real,Img);
						break;
					case 0:
						R_1 = (-b) / (2.0 * a);
						R_2 = R_1;printf("Roots are Real and same \n Root1 = %.2f \t Root2 = %.2f\n",R_1,R_2);
						break;
				}
		}
	}
}	



