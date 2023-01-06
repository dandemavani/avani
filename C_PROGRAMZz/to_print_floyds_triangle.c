/*TO PRINT FLOYDS TRIANGLE*/

#include<stdio.h>

void main()
{
	int i,j,k,R_Cnt;
	k=1;
	printf("Enter the Row Count\n");
	scanf("%d",&R_Cnt);
	for(i=1;i<=R_Cnt;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
}
