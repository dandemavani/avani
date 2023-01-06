/*TO FIND MAXIMUM AND MINIMUM OF 3 NUMBERS*/

#include<stdio.h>

int Maximum(int,int,int);
int Minimum(int,int,int);

void main()
{
	int A,B,C;
	printf("Enter three numbers respectively\n");
	scanf("%d%d%d",&A,&B,&C);
	printf("\nOut of %d,%d,%d:Highest Number=%d\n",A,B,C,Maximum(A,B,C));
	printf("\nOut of %d,%d,%d:Lowest Number=%d\n",A,B,C,Minimum(A,B,C));
}

int Maximum(int A,int B,int C)
{
	if(A > B)
	{
		if(A > C)
		{
			return(A);
		}
		else
		{
			return(C);
		}
	}
	else
	{
		if(B > C)
		{
			return(B);
		}
		else
		{
			return(C);
		}
	}
}

int Minimum(int A,int B,int C)
{
        if(A < B)
        {
                if(A < C)
                {
                        return(A);
                }
                else
                {
                        return(C);
                }
        }
        else
        {
                if(B < C)
                {
                        return(B);
                }
                else
                {
                        return(C);
                }
        }
}

