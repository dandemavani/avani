#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,d,r1,r2,real,img;
	printf("Enter the coefficients of X,Y,Z\n");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	printf("d=%.2f\n",d);
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
	        printf("Root1=%5.2f\tRoot2=%5.2f\n",r1,r2);
	
	}
        else if(d==0)
	{
	        r1=(-b)/(2*a);
		r2=(-b)/(2*a);
		printf("Root1=%5.2f\tRoot2=%5.2f\n",r1,r2);
        }
	else
	{
	       real=-b/(2*a);
	       img=sqrt(-d)/(2*a);
	       printf("Root1=%5.2f+i%5.2f \t Root2=%5.2f-i%5.2f\n",real,img,real,img);
        }
}	
         

