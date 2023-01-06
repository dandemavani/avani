#include<stdio.h>
#include<math.h>

void main()
{/*
	int base,expo,result=0;
	printf("Enter BASE value and EXPONENT value\n");
        scanf("%d%d",&base,&expo);
        result=pow(base,expo);
        printf("POWER of %d base and %d exponent is %d\n",base,expo,result);
	*/


        int num,power=1,i,expo;
        printf("Enter the number whose power want to be find\n");
        scanf("%d",&num);
        printf("Enter the exponenet\n");
        scanf("%d",&expo);
        for(i=expo;i>=1;i--)
	{
	   power=power*num;
	}
        printf("POWEr=%d\n",power);	
}	

