/*TO PERFORM SCALAR MULTIPLICATION*/

#include<stdio.h>

void main()
{
	int A[10][10],i,j,R_Cnt,C_Cnt,Mlplr = 1;
	printf("Enter row count and colomn count\n");
	scanf("%d%d",&R_Cnt,&C_Cnt);
	printf("\nEnter the multiplier\n");
	scanf("%d",&Mlplr);
	printf("\nEnter elements to matrix\n");
         for(i=0;i<R_Cnt;i++)
         {
		 for(j=0;j<C_Cnt;j++)
                 {
			 scanf("%d",&A[i][j]);
                 }
         }
         printf("\nArray elements are\n ");
         for(i=0;i<R_Cnt;i++)
         {
		 for(j=0;j<C_Cnt;j++)
                 {
			 printf("%d\t",A[i][j]);
                 }
                 printf("\n");
         }
	 for(i=0;i<R_Cnt;i++)
	 {
		 for(j=0;j<C_Cnt;j++)
		 {
			 A[i][j] = Mlplr * A[i][j];
		 }
	 }
	 printf("\nFollowing  the Scalar matrix \n");
	 for(i=0;i<R_Cnt;i++)
	 {
		 for(j=0;j<C_Cnt;j++)
		 {
			 printf("%d\t",A[i][j]);
		 }
		 printf("\n");
	 }
}

