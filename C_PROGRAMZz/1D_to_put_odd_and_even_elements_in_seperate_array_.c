/*TO PUT ODD AND EVEN NUMBERS IN TWO SEPERATE ARRAYS*/

#include<stdio.h>
#define Size 10
void main()
{
	int A[Size],Even[Size],Odd[Size],i,Count_1,Count_2;
	printf("Enter elements to array\n");
	for(i=0;i<Size;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\n Entered array elements are\n");
	for(i=0;i<Size;i++)
	{
		printf("%d\t",A[i]);
	}
	Count_1 = Count_2 = 0;
	for(i=0;i<Size;i++)
	{
		if(A[i] % 2 == 0)
		{
			Even[Count_1] = A[i];
			Count_1++;
		}
		else
		{
			Odd[Count_2] = A[i];
			Count_2++;
		}
	}
	printf("\nEven numbers in Entered ARRAY are\n");
	for(i=0;i<Count_1;i++)
	{
		printf("%d\t",Even[i]);
	}	
	printf("\nOdd numbers in Entered ARRAY are\n");
        for(i=0;i<Count_2;i++)
        {
                printf("%d\t",Odd[i]);
        }
}
