/*TO PRINT NUMBERS IN WORDS USING LOOPS*/

#include<stdio.h>
#include<stdlib.h>

void main()
{								//while loop
/*	int Nmbr,Remndr_1,Remndr_2,Revse;
	Revse = 0;
	printf("Enter any Number\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		while(Nmbr > 0)
		{
			Remndr_1 = Nmbr % 10;
			Revse = Revse *10 + Remndr_1;
			Nmbr = Nmbr / 10;
		}
		printf("Reversed Number =%d\n",Revse);
		while(Revse > 0)
		{
			Remndr_2 = Revse % 10;
			switch(Remndr_2)
			{
				case 0:
					printf("Zero\t");
					break;
				case 1:
					printf("One\t");
					break;
				case 2:
					printf("Two\t");
					break;
				case 3:
					printf("Three\t");
					break;
				case 4:
					printf("Four\t");
					break;
				case 5:
					printf("Five\t");
					break;
				case 6:
					printf("Six\t");
					break;
				case 7:
					printf("Seven\t");
					break;
				case 8:
					printf("Eight\t");
					break;
				case 9:
					printf("Nine\t");
					break;
				default:
					printf("Invalid\t");
					break;
			}
			Revse = Revse / 10;
		}
	}
*/

										//do..while loop	
	int Nmbr,Remndr_1,Remndr_2,Revse;
        Revse = 0;
        printf("Enter any Number\n");
        scanf("%d",&Nmbr);
        if(Nmbr < 0)
        {
                printf("Invalid Number\n");
                exit(0);
        }
        else
        {
		do
		{
			Remndr_1 = Nmbr % 10;
                        Revse = Revse *10 + Remndr_1;
                        Nmbr = Nmbr / 10;
		}while(Nmbr > 0);
		printf("Reversed Number = %d\n",Revse);
		do
		{
			Remndr_2 = Revse % 10;
			switch(Remndr_2)
                        {
                                case 0:
                                        printf("Zero\t");
                                        break;
                                case 1:
                                        printf("One\t");
                                        break;
                                case 2:
                                        printf("Two\t");
                                        break;
                                case 3:
                                        printf("Three\t");
                                        break;
                                case 4:
                                        printf("Four\t");
                                        break;
                                case 5:
                                        printf("Five\t");
                                        break;
                                case 6:
                                        printf("Six\t");
                                        break;
                                case 7:
                                        printf("Seven\t");
                                        break;
                                case 8:
                                        printf("Eight\t");
                                        break;
                                case 9:
                                        printf("Nine\t");
                                        break;
                                default:
                                        printf("Invalid\t");
                                        break;
                        }
			Revse = Revse / 10;
		}while(Revse > 0);
	}

}	
