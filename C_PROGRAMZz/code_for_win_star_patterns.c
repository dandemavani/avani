
/* 1-   *****
        *****
        *****
        *****
        *****     */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter number of Rows\n");
	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
		for(j = 1; j <= Rws; j++)
		{
			printf("*");
		}
		printf("\n");

		}
        }
}
*/
/* 2-    *****
 	 *   *
	 *   *
	 *   *
	 *****     */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter the number of Rows\n");
	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
		for(j = 1; j <= Rws; j++)
		{
			if(i == 1 || i == Rws || j == Rws || j == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 3-  *****
       ** **
       * * *
       ** **
       *****    */

/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter number of Rows\n");
	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
		for(j= 1; j <= Rws; j++)
		{
			if(i == 1 || i == Rws || j == 1 || j == Rws || i == j || j == (Rws - i + 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 4-     *****
         *****
       *****
     *****
   *****    */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter number of rows\n");
	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
		for(j = 1; j <= Rws - i; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= Rws; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/* 5-         *****
             *    *
	    *    *
	   *    *
	  ******   */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter the number of rows\n");
	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
			for(j = 1; j <= Rws - i; j++)
			{
				printf(" ");
			}
			for(j = 1; j <= Rws; j++)
			{
				if(i == 1 || i == Rws || j == 1 || j == Rws)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
	}
}
*/

/* 5-     *****
 	   *****
	    *****
	     *****
	      *****     */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter the Rows\n"); 
	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
		for(j = 1; j <i; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= Rws; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/


/* 6-  *****
        *   *
	 *   *
	  *   *
	   *****  */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter number of rows\n");
	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
		for(j = 1; j < i; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= Rws; j++)
		{
			if(i == 1 || i == Rws || j == 1 || j == Rws)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 7-  *
       **
       ***
       ****
       *****  */

/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter the rows count\n");
	scanf("%d",&Rws);
	for(i=1;i<=Rws;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/* 8-  *
       **
       * *
       *   *
       ******   */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter Rows count\n");
	scanf("%d",&Rws);
	for(i=1;i<=Rws;i++)
	{
		for(j=1;j<=Rws;j++)
		{
			if(j==1 || i==Rws || i==j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 9- *****
      ****
      ***
      **
      *   */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter row number\n");
	scanf("%d",&Rws);
	for(i=Rws;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/* 10- *****
       *  *
       * * 
       **
       *    */
/*#include<stdio.h>

void main()
{
	int i,j,Rws;
	printf("Enter rows\n");
	scanf("%d",&Rws);
	for(i=Rws;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(i==Rws || j==1 || i==j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 11-      *
           **
	  ***
	 ****
	*****   */

/*#include<stdio.h>

void main()
{
	int i,j,rws;
	printf("enter row number\n");
	scanf("%d",&rws);
	for(i=1;i<=rws;i++)
	{
		for(j=1; j<=rws-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/* 12-      *
           **
	  * *
	 *  *
	*****  */
/*#include<stdio.h>

void main()
{
	int i,j,rws;
	printf("enter the rows count\n");
	scanf("%d",&rws);
	for(i=1;i<=rws;i++)
	{
		for(j=1;j<=rws-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=rws;j++)
		{
			if(i==rws || j==1 || i==j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 13 -  *****
          ****
	   ***
	    **
	     *  */
/*#include<stdio.h>

void main()
{
        int i,j,rws;
        printf("enter the rows count\n");
        scanf("%d",&rws);
        for(i=rws;i>=1;i--)
        {
                for(j=1;j<=i;j++)
                {
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/* 14-  *****
         *  *
	  * *
	   **
	    *  */

/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("enter rows\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=r;j++)
		{
			if(i==1||i==j||j==r)
			{
			    printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 15-           *
                ***
	       *****
	      *******
	     *********   */
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter row no\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(k=i;k<r;k++)
		{
			printf(" ");
		}
		for(k=1;k<i;k++)
		{
			printf("*");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=i;j<r;j++)
		{
			printf(" ");
		}
		printf("\n");
	}

	or 
	for(i=1;i<=r;i++)
	{
		for(j=i;j<r;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
*/

/* 16        *
 	    * *
	   *   *
	  *     *
	 *********  */

/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("enter row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=i;j<r;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			if(i==r||j==1||j==(2*i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 17-         *********
 		*******
		 *****
		  ***
		   *  */

/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("enter row numbers\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=((2*r)-((i*2)-1));j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/
/* 18-  *********
         *     *
	  *   *
	   * *
	    *    */
/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("Enter number of rows\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=(2*r)-i;j++)
		{
			if(i==1 || i == j || j == (2*r-i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/
/* 19 - *
        **
	***
	****
	*****
	****
	***
	**
	*   */
/*#include<stdio.h>

void main()
{
	int i,j,r,k;
	k=1;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<(2*r);i++)
	{
		if(i<=r)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j=k;j<r;j++)
			{
				printf("*");
			}
			k++;
			printf("\n");
		}
	}
}
*/
/* 20 -      *
            **
	   ***
	  ****
	 *****
	  ****
	   ***
	    **
	     *  */
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	k=1;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<2*r;i++)
	{
		if(i<=r)
		{
			for(j=i;j<r;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=k;j++)
			{
				printf(" ");
			}
			for(j=k;j<r;j++)
			{
				printf("*");
			}
			k++;
			printf("\n");
		}
	}
}
*/
/* 21-      *
           ***
	  *****
	 *******
	*********
	 *******
	  *****
	   ***
	    *   */
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	k=1;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<2*r;i++)
	{
		if(i<=r)
		{
			for(j=i;j<r;j++)
			{
				printf(" ");
			}
			for(j=1;j<=(2*i)-1;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=k;j++)
			{
				printf(" ");
			}
			for(j=1;j<(2*r)-(2*k);j++)
			{
				printf("*");
			}
			k++;
			printf("\n");
		}
	}
}
*/
/* 22- **********
       ****  ****
       ***    ***
       **      **
       *        *
       *        *
       **      **
       ***    ***
       ****  ****
       **********   */
/*#include<stdio.h>

void main()
{

    int i,j,k,r;
    k=1;
    printf("enter the row count\n");
    scanf("%d",&r);
    for(i=1;i<=2*r;i++)
    {
        if(i<=r)
        {
            for(j=i;j<=r;j++)
            {
                printf("*");
            }
            for(j=1;j<i;j++)
            {
                printf(" ");
            }
            for(j=1;j<i;j++)
            {
                printf(" ");
            }
            for(j=i;j<=r;j++)
            {
                printf("*");
            }
            printf("\n");

        }
        else
        {
            for(j=1;j<=k;j++)
            {
                printf("*");
            }
            for(j=k+1;j<=r;j++)
            {
                printf(" ");
            }
            for(j=k;j<r;j++)
            {
                printf(" ");
            }
            for(j=1;j<=k;j++)
            {
                printf("*");
            }
            k++;
            printf("\n");

        }
    }
}
*/

/* 23-    *****
            ****
	      ***
	        **
      	          *
	        **
	      ***
            ****
	  ***** */
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	k=1;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<2*r;i++)
	{
		if(i<r)
		{
			for(j=1;j<i;j++)
			{
				printf("  ");
			}
			for(j=i;j<=r;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j=k;j<r;j++)
			{
				printf("  ");
			}
			for(j=1;j<=k;j++)
			{
				printf("*");
			}
			k++;
			printf("\n");
		}
	}
}
*/
/* 24-           *****
                ****
	       ***
	      **
	     *
	      **
	       ***
	        ****
		 *****   */
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	k=1;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<2*r;i++)
	{
		if(i<r)
		{
			for(j=i;j<r;j++)
			{
				printf("  ");
			}
			for(j=i;j<=r;j++)
			{
				printf("*");
			}
			
			printf("\n");
		}
		else
		{
			for(j=1;j<k;j++)
			{
				printf("  ");
			}
			for(j=1;j<=k;j++)
			{
				printf("*");
			}
			k++;
			printf("\n");
		}
	}
}
*/ 
/* 25 -       +
              +
	      +
	      +
	  +++++++++
	      +
	      +
	      +
	      +   */
/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<2*r;i++)
	{
		for(j=1;j<2*r;j++)
		{
			if(i==r || j==r)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/* 26- *       *
        *     *  
	 *   * 
	  * *
	   *         
	 *  * 
        *    *
       *      *
      *	       *   */
/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<2*r;i++)
	{
		for(j=1;j<2*r;j++)
		{
			if((i==j) || (j==(2*r)-i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/*
 * 27-     ***
          *   *
	  *   *
	  *   *
	   ***
	  *   *
	  *   *
	  *   *
	   ***   */
/*#include<stdio.h>

void main()
{
	int i,j,k=1,r;
    printf("enter the row count\n");
    scanf("%d",&r);
    for(i=1;i<2*r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(i==1&&j==1 || i==1&&j==r || i==r&&j==1 || i==r&&j==r || i== (2*r)-1&&j==1 || i==(2*r)-1&&j==r)
            {
                printf(" ");
            }
            else if(i==1||i==(r*2)-1||i==r||j==1||j==r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
*/
/*             *****     *****
              *******   *******
	     ********* *********
	     *******************
	      *****************
	       ***************
	        *************
		 ***********
		  *********
		   *******
		    *****
		     ***
		      *  */
#include<stdio.h>

void main()
{
	int i,j,k,r;
	k=0;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=3;i<=(2*r)+r;i++)
	{
		if(i<r)
		{
			for(j=i;j<r;j++)
			{
				printf(" ");
			}
			for(j=1;j<=(2*i)-1;j++)
			{
				printf("*");
			}
			for(j=i;j<(2*r)-i-1;j++)
			{
				printf(" ");
			}
			for(j=1;j<=(2*i)-1;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=k+1;j++)
			{
				printf(" ");
			}
			for(j=1;j<=(2*(2*r)-i-k);j++)
			{
				printf("*");
			}
			k++;
			printf("\n");
		}
          
	}
}
