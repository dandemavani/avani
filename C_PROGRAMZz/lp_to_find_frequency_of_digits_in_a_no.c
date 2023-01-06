/*TO FIND FREQUENCY OF DIGITS IN A GIVEN NUMBER*/

#include<stdio.h>
#include<stdlib.h>

void main()
{									//while loop
/*	int Nmbr,Remndr,Temp,Cnt_0,Cnt_1,Cnt_2,Cnt_3,Cnt_4,Cnt_5,Cnt_6,Cnt_7,Cnt_8,Cnt_9;
	Cnt_0 = Cnt_1 = Cnt_2 = Cnt_3 = Cnt_4 = Cnt_5 = Cnt_6 = Cnt_7 = Cnt_8 = Cnt_9 = 0;
	printf("Enter a Number\n");
	scanf("%d",&Nmbr);
	Temp = Nmbr;
	if(Nmbr < 0)
	{
		printf("Invalid Limit\n");
		exit(0);
	}
	else
	{
		while(Nmbr > 0)
		{
			Remndr = Nmbr % 10;
			switch(Remndr)
			{
				case 0:
					Cnt_0++;
					break;
				case 1:
					Cnt_1++;
					break;
				case 2:
					Cnt_2++;
					break;
				case 3:
					Cnt_3++;
					break;
				case 4:
					Cnt_4++;
					break;
				case 5:
					Cnt_5++;
					break;
				case 6:
					Cnt_6++;
					break;
				case 7:
					Cnt_7++;
					break;
				case 8:
					Cnt_8++;
					break;
				case 9:
					Cnt_9++;
					break;
				default:
					break;	
			}
			Nmbr = Nmbr / 10;
		}
	//	printf("Entered Numbers: %d\n Number of 0's :%d\n Number of 1's :%d\n",Nmbr,Cnt_0,Cnt_1);
	}
	printf("Entered Numbers: %d\n Number of 0's :%d\n Number of 1's :%d\n Number of 2's :%d\n Number of 3's :%d\n Number of 4's :%d\n Number of 5's :%d\n Number of 6's :%d\n Number of 7's :%d\n Number of 8's :%d\n Number of 9's :%d\n",Temp,Cnt_0,Cnt_1,Cnt_2,Cnt_3,Cnt_4,Cnt_5,Cnt_6,Cnt_7,Cnt_8,Cnt_9);
*/


	int Nmbr,Temp,Remndr,Cnt_0,Cnt_1,Cnt_2,Cnt_3,Cnt_4,Cnt_5,Cnt_6,Cnt_7,Cnt_8,Cnt_9;
        Cnt_0 = Cnt_1 = Cnt_2 = Cnt_3 = Cnt_4 = Cnt_5 = Cnt_6 = Cnt_7 = Cnt_8 = Cnt_9 = 0;
        printf("Enter a Number\n");
        scanf("%d",&Nmbr);
        Temp = Nmbr;
        if(Nmbr < 0)
        {
                printf("Invalid Limit\n");
                exit(0);
        }
        else
        {
		do
		{
			Remndr = Nmbr % 10;
                        switch(Remndr)
                        {
                                case 0:
                                        Cnt_0++;
                                        break;
                                case 1:
                                        Cnt_1++;
                                        break;
                                case 2:
                                        Cnt_2++;
                                        break;
                                case 3:
                                        Cnt_3++;
                                        break;
                                case 4:
                                        Cnt_4++;
                                        break;
                                case 5:
                                        Cnt_5++;
                                        break;
                                case 6:
                                        Cnt_6++;
                                        break;
                                case 7:
                                        Cnt_7++;
                                        break;
                                case 8:
                                        Cnt_8++;
                                        break;
                                case 9:
                                        Cnt_9++;
                                        break;
                                default:
                                        break;
                        }
			Nmbr = Nmbr / 10;
		}while(Nmbr > 0);
		printf("Entered Numbers: %d\n Number of 0's :%d\n Number of 1's :%d\n Number of 2's :%d\n Number of 3's :%d\n Number of 4's :%d\n Number of 5's :%d\n Number of 6's :%d\n Number of 7's :%d\n Number of 8's :%d\n Number of 9's :%d\n",Temp,Cnt_0,Cnt_1,Cnt_2,Cnt_3,Cnt_4,Cnt_5,Cnt_6,Cnt_7,Cnt_8,Cnt_9);
	}
}


	
