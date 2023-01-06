/*TO PRINT ARMSTRONG NUMBERS FROM 1 TO N*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int L_Lmt,S_Lmt,Value,Sum,Remndr;
	S_Lmt = 1;
        printf("Enter the last limit\n");
        scanf("%d",&L_Lmt);
        if(L_Lmt < 0)
        {
                printf("Invalid Number\n");
                exit(0);
        }
        else if(L_Lmt == 0)
        {
                printf("Entered Number is Zero,It's Neither a Positive No. Nor a Negative No.\n");
                exit(0);
        }
	else
	{
		printf("Armstrong Numbers from %d to %d are as follows:",S_Lmt,L_Lmt);
		while(L_Lmt >= S_Lmt)
		{
			Sum = 0;
			Value = L_Lmt;
			while(Value != 0)
			{
				Remndr = Value % 10;
				Sum = Sum + (Remndr * Remndr * Remndr);
				Value = Value / 10;
			}
			if(Sum == L_Lmt)
			{
				printf("%d\t",Sum);
			}
			L_Lmt--;
		}
		printf("\n");
	}
}

