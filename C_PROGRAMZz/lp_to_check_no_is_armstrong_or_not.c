/*TO CHECK WHETHER THE NUMBER IS ARMSTRONG OR NOT*/

#include<stdio.h>
#include<stdlib.h>

void main()
{									//while loop
/*	int Nmbr,Temp,Init,Sum,Remndr;
	Init = 1;
	Sum = 0;
	printf("Enter the Number you want to check\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else if(Nmbr == 0)
	{
		printf("Entered Number is Zero,It's Neither a Positive No. Nor a Negative No.\n");
		exit(0);
	}
	else
	{
		Temp = Nmbr;
		while(Nmbr != 0)
		{
			Remndr = Nmbr % 10;
			Sum = Sum + (Remndr * Remndr * Remndr);
			Nmbr = Nmbr / 10;
		}
		if(Sum == Temp)
		{
			printf("%d is Armstrong Number\n",Temp);
		}
		else
		{
			printf("%d is not an Armstrong Number\n",Temp);
		}
	}
*/
										//do..while loop

	int Nmbr,Temp,Init,Sum,Remndr;
        Init = 1;
        Sum = 0;
        printf("Enter the Number you want to check\n");
        scanf("%d",&Nmbr);
        if(Nmbr < 0)
        {
                printf("Invalid Number\n");
                exit(0);
        }
        else if(Nmbr == 0)
        {
                printf("Entered Number is Zero,It's Neither a Positive No. Nor a Negative No.\n");
                exit(0);
        }
	else
	{
		Temp = Nmbr;
		do
		{
			Remndr = Nmbr % 10;
			Sum = Sum + (Remndr * Remndr * Remndr);
			Nmbr = Nmbr / 10;
		}while(Nmbr != 0);
		if(Temp == Sum)
		{
			printf("%d is an ARmstrong Number\n",Temp);
		}
		else
		{
			printf("%d is not an Armstrong Nmuber\n",Temp);
		}
	}

	
}
