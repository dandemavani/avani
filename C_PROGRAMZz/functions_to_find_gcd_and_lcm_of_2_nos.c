/*TO FIND GCD AND LCM OF 2 NOS*/

#include<stdio.h>

int HCF(int,int);
int LCM(int,int,int);

void main()
{
	int A,B,Value;
	printf("Enter two numbers\n");
	scanf("%d%d",&A,&B);
	Value = HCF(A,B);
	printf("\nHCF of %d and %d is %d\n",A,B,Value);
	printf("\nLCM of %d and %d is %d\n",A,B,LCM(A,B,Value));
}

int HCF(int Nmbr_1,int Nmbr_2)
{
	int i,Min,Hcf;
	Min = (Nmbr_1 < Nmbr_2) ? Nmbr_1 : Nmbr_2;
	for(i=1;i<=Min;i++)
	{
		if((Nmbr_1 % i == 0 ) && (Nmbr_2 % i == 0))
		{
			Hcf = i;
		}
	}
	return(Hcf);
}

int LCM(int Nmbr_1,int Nmbr_2,int Hcf)
{
	int Lcm;
	Lcm = (Nmbr_1 * Nmbr_2) / Hcf;
	return(Lcm);
}


