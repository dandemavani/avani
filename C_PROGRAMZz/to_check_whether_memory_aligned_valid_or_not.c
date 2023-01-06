#include<stdio.h>

void main()
{
	int Adrs,Mod_Adrs,Byte_size,Rmndr,Temp;
	printf("Enter the address of memory location\n");
	scanf("%X",&Adrs);
	printf("Which type memory alignment you are using!...\n.)Byte size 2 \n .)Byte Size 4 \n .)Byte size 8 \n .)Byte Size 16\n");
        scanf("%d",&Byte_size);
	if(Byte_size == 2 || Byte_size == 4 || Byte_size ==8 || Byte_size ==16)
	{
		Rmndr = Adrs % Byte_size;
		if(Rmndr != 0)
		{
			Temp = Byte_size - Rmndr;
			Mod_Adrs = Adrs + Temp;
		}
		if(Adrs == Mod_Adrs)
		{
			printf("You Entered the Valid Address\n");
		}
		else
		{
			printf("You entered %X invlid address in %d alignment!...The correct one is %X\n",Adrs,Byte_size,Mod_Adrs);
		}
	}
	else
	{
		printf("You Entered Invalid Byte Size!...\n");
	}
}	
		
