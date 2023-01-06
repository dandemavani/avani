/*TO FIND AND REVERSE AND CHECK PALINDROME OF NUMBER*/

#include<stdio.h>

int Reverse(int);
int Palindrome(int,int);

void main()
{
	int Nmbr,Revse,Pldme;
	Revse = Pldme = 0;
	printf("\nEnter the Number\n");
	scanf("%d",&Nmbr);
	Revse = Reverse(Nmbr);
	Pldme = Palindrome(Nmbr,Revse);
	printf("\nReversed Number = %d\n",Revse);
	if(Pldme == 1)
	{
		printf("\nNumber is Palindrome\n");
	}
	else
	{
		printf("\nNumber is Not Palindrome\n");
	}
}

int Reverse(int Nmbr)
{
	int Rev,Rem;
	Rev = 0;
	while(Nmbr > 0)
	{
		Rem = Nmbr % 10;
		Rev = (Rev * 10) + Rem;
		Nmbr = Nmbr / 10;
	}
	return(Rev);
}

int Palindrome(int Nmbr,int Revse)
{
	if(Nmbr == Revse)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

