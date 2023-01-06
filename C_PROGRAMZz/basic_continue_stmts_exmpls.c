#include<stdio.h>

void main()
{
/*	int Nmbr;
	for(Nmbr = 1; Nmbr <= 10; Nmbr++)
	{
		if(Nmbr == 5)
		{
			continue;
		}
		printf("%d\t",Nmbr);
	}
*/

/*	int Nmbr;
	Nmbr = 2;
	while(Nmbr <= 20)
	{
		if(Nmbr == 10)
		{
			Nmbr = Nmbr + 2;
			continue;
		}
		printf("%d\n",Nmbr);
		Nmbr = Nmbr + 2;
	
	}
*/	


/*	int Nmbr;
	Nmbr = 1;
	do
	{
		if(Nmbr == 15)
		{
			Nmbr = Nmbr + 2;
			continue;
		}
		printf("%d\t",Nmbr);
		Nmbr = Nmbr + 2;
	}while(Nmbr <= 30);
			
*/

/*	int Nmbr;
	Nmbr = 0;
	while(Nmbr <= 20)
	{
		if(Nmbr % 2 == 0)
		{
		//	Nmbr = Nmbr + 1;
			continue;
		}
		printf("%d\t",Nmbr);
		Nmbr = Nmbr + 1;		
	}
*/

/*	int Nmbr,Init,Sum = 0,Lmt;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("Enter the no\n");
	for(Init = 1; Init <= Lmt; Init++)
	{
		//printf("Enter the no\n");
		scanf("%d",&Nmbr);
		if(Nmbr < 0)
		{
			printf("you enterd negative no\n");
			break;
		}
		Sum = Sum + Nmbr;
	}
	printf("Sum of positive numbers=%d\n",Sum);
*/

/*	int Nmbr,Init,Sum = 0,Lmt;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("Enter no.s\n");
	for(Init = 1; Init <= Lmt; Init++)
	{
		scanf("%d",&Nmbr);
		if(Nmbr < 0)
		{
			continue;
		}
		Sum = Sum + Nmbr;
	}
	printf("Sum = %d\n",Sum);
*/

/*	int Nmbr,Init,Sum = 0,Lmt;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	Init = 1;
	printf("Enter the no.s\n");
	while(Init <= Lmt)
	{
		scanf("%d",&Nmbr);
		if(Nmbr < 0)
		{
			Init++;
			continue;
		}
		Sum = Sum + Nmbr;
		Init++;
	}
	printf("Sum = %d\n",Sum);
*/

	
/*	int Nmbr,Init,Sum = 0,Lmt;
        printf("Enter the limit\n");
        scanf("%d",&Lmt);
        Init = 1;
        printf("Enter the no.s\n");
        while(Init <= Lmt)
        {
                scanf("%d",&Nmbr);
                if(Nmbr < 0)
                {
                        goto x;
                        continue;
                }
                Sum = Sum + Nmbr;
 		x: Init++;
        }
        printf("Sum = %d\n",Sum);
*/

/*	int Nmbr,Init,Lmt,Sum = 0;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("Enter no.s\n");
	for(Init = 1; Init < Lmt;  )
	{
		scanf("%d",&Nmbr);
		if(Nmbr < 0)
		{
			continue;
		}
		Sum = Sum + Nmbr;
		Init++;
	}
	printf("Sum =%d\n",Sum);
*/


/*	int Nmbr,Init;
	for(Init = 1; Init <= 5;)
	{
		if(Init == 3)
		{
			continue;
		}
		printf("%d\n",Init);
		Init++;
	}
*/	

}
