/*1-   11111
       11111
       11111
       11111
       11111  */
/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("Enter the row and colomn count\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("1");
		}
		printf("\n");
	}
}
*/

/* 2- 11111
      00000
      11111
      00000
      11111  */
/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("Enter the row and colomn count\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i % 2 == 0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
*/

/* 3- 01010
      01010
      01010
      01010
      01010  */

/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("enter number of rows and coloumns\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(j%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
*/

/* 4- 11111
      10001
      10001
      10001
      11111  */

/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("Enter the number of rows and colomns count\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==1 || i==r || j==1 || j==c)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
*/

/* 5-  11111
       11111
       11011
       11111
       11111  */
/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("Enter row and colomn count\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==r/2 && j==c/2)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
*/ 

/*6-  10101
      01010
      10101
      01010
      10101  */
/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("enter row and colomn count\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if((i+j) % 2 == 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
*/

/* 7 - 11011
 *     11011
 *     00000
 *     11011
 *     11011  */

/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("Enter row and coloumn count\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if((i==(r/2)+1) || (j==(c/2)+1) )
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
*/

/* 8- 10001
      01010
      00100
      01010
      10001  */
/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("Enter the row and coloumn\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==j || j== (c+1)-i)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
*/

/* 9-  01110
       10101
       11011
       10101
       01110 */

/*#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("Enter row and colomn required\n");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==j || j==(c+1)-i)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
*/

/* 10-  11111
        22222
	33333
	44444
	55555*/
/*#include<stdio.h>

void main()
{        
        int i,j,r,c;
        printf("Enter row and colomn required\n");
        scanf("%d%d",&r,&c);
        for(i=1;i<=r;i++)
        {
                for(j=1;j<=c;j++)
                {
			printf("%d",i);
		}
		printf("\n");
	}
}
*/

/* 11-  12345
        12345
	12345
	12345
	12345*/
/*#include<stdio.h>

void main()
{
        int i,j,r,c;
        printf("Enter row and colomn required\n");
        scanf("%d%d",&r,&c);
        for(i=1;i<=r;i++)
        {
                for(j=1;j<=c;j++)
                {
			if(j <= c)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
*/

/* 12-  12345
        23456
	34567
	45678
	56789*/
/*#include<stdio.h>

void main()
{
        int i,j,k,r,c;
        printf("Enter row and colomn required\n");
        scanf("%d%d",&r,&c);
        for(i=1;i<=r;i++)
        {
                for(j=i;j<i+c;j++)
                {
			printf("%d",j);
		}
		printf("\n");
	}
}
*/

/* 13-  1 2 3 4 5
        6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25  */
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	k=1;
	printf("Enter row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++,k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}
*/

/* 14- 55555
       54444
       54333
       54322
       54321   */
/*#include<stdio.h>

void main()
{
	int i,j,k,p,r;
	printf("Enter row number\n");
	scanf("%d",&r);
	p=r;
	for(i=1;i<=r;i++)
	{
		k=r;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
		        k--;	
		}
		for(j=i;j<r;j++)
		{
			printf("%d",p);
		}
	        p--;
		printf("\n");
	}
}
*/
/* 15-  12345
        23455
	34555
	45555
	55555  */
/*#include<stdio.h>

void main()
{
	int i,j,r,k;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i;
		for(j=1;j<=r;j++)
		{
			if(k>r)
			{
				printf("%d",r);
			}
			else
			{
				printf("%d",k);
				k++;
			}
		}
		printf("\n");
	}
}
*/
/* 16-  12345
        23451
	34521
	45321
	54321  */
/*#include<stdio.h>

void main()
{
	int i,j,k,r,p;
	p=1;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i;
		for(j=i;j<=r;j++)
		{
			printf("%d",k);
			k++;
		}
		p=i-1;
		for(j=1;j<i;j++)
		{
			printf("%d",p);
			p--;
		}

		printf("\n");
	}
}
*/

/* 17- 12345
       21234
       32123
       43212
       54321  */
/*#include<stdio.h>

void main()
{
	int i,j,r,p,k;
	printf("Enter row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		k=2;
		for(j=i;j<r;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
*/

/* 18-   555555555
         544444445
         543333345
         543222345
         543212345
         543222345
         543222245
         544444445
         555555555  */
/*#include<stdio.h>

void main()
{
	
        int i,j,k,x,r,p,q,v,y,z;
        printf("Enter the row count\n");
        scanf("%d",&r);
        k=p=r;
        q=x=y=1;
        v=(r/2);
        z=(r/2)+1;
        for(i=1;i<2*r;i++)
        {
                if(i<=r)
                {
                        k=r;
                        for(j=1;j<i;j++)
                        {
                                printf("%d",k);
                                k--;
                        }
                        for(j=i;j<=(2*r)-i;j++)
                        {
                                printf("%d",k);
                        }
                        k--;
                        for(j=1;j<i;j++)
                        {
                                printf("%d",p);
                                p++;
                                if(p>r)
                                {
                                        p=p-i;
                                }

                        }
                        printf("\n");
                }
                else
                {
                        k=r;
                        for(j=q;j<r-1;j++)
                        {
                                printf("%d",k);
                                k--;
                        }
                        q++;
                       for(j=x;j<=(3*x);j++)
                        {
                                printf("%d",v);
                        }
                        v++;
                        x++;
                        for(j=1;j<r-y;j++)
                        {
                            printf("%d",z);
                            z++;
                        }
                        y++;
                        z=(r/2)+y;
                        printf("\n");
                }
        }
}
*/
/* 19- 1
       22
       333
       4444
       55555*/
/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("Enter row number\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
*/

/* 20- 55555
       4444
       333
       22
       1*/
/*#include<stdio.h>

void main()
{
	int i,j,r,y;
	printf("enter the row number\n");
	scanf("%d",&r);
	y=r;
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			printf("%d",y);
		}
		y--;
		printf("\n");
	}
}
*/

/*
 * 21- 11111
       2222
       333
       44
       5*/
/*#include<stdio.h>

void main()
{
	int i,j,r;
	printf("Enter row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			printf("%d",i);
		}
		y--;
		printf("\n");
	}
}
*/

/* 22- 5
       44
       333
       2222
       11111*/
/*#include<stdio.h>

void main()
{
        int i,j,r,y;
        printf("Enter row count\n");
        scanf("%d",&r);
	y=r;
        for(i=1;i<=r;i++)
        {
		for(j=1;j<=i;j++)
		{
			printf("%d",y);
		}
		y--;
		printf("\n");
	}
}
*/
/* 23-  1
        12
	123
	1234
	12345*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=1;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
*/

/* 24- 12345
       1234
       123
       12
       1*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=1;
		for(j=i;j<=r;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
*/

/* 25- 1
       21
       321
       4321
       54321*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
}
*/

/* 26- 54321
       4321
       321
       21
       1*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter the row count\n");
	scanf("%d",&r);
	k=r;
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			printf("%d",k);
			k--;
		}
		k=r-i;
		printf("\n");
	}
}
*/

/* 27-  5
        54
        543
        5432
        54321*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=r;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
}
*/

/* 28- 54321
       5432
       543
       54
       5*/
/*#include<stdio.h>

void main()
{
	int i,j,r,k;
	printf("Enter the row count\n");
	scanf("%d",&r);
	k=r;
	for(i=1;i<=r;i++)
	{
		k=5;
		for(j=i;j<=r;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
}
*/
/* 29-  5
        45
	345
	2345
	12345*/
/*#include<stdio.h>

void main()
{
	int i,j,r,k;
	printf("Enter the row count\n");
	scanf("%d",&r);
	k=r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		k=r-i;
		printf("\n");
	}
}
*/

/* 30-   12345
         2345
	 345
	 45
	 5*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter row count\n");
        scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i;
		for(j=i;j<=r;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
*/

/*31-  1
       23
       345
       4567
       56789*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
*/
/*32-  56789
       4567
       345
       23
       1*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter the row count\n");
	scanf("%d",&r);
	k=r;
	for(i=1;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			printf("%d",k);
			k++;
		}
		k=r-i;
		printf("\n");
	}
}
*/
/* 33- 13579
       3579
       579
       79
       9*/
/*#include<stdio.h>

void main()
{
	int i,j,k,r;
	printf("Enter the row count\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		k=2*i-1;
		for(j=k;j<2*r;j=j+2)
		{
			if(j%2!=0)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
*/
/* 34-  1
        10
	101
	1010
	10101*/
/*#include<stdio.h>

void main()
{
        int i,j,k,r;
        printf("Enter the row count\n");
        scanf("%d",&r);
        for(i=1;i<=r;i++)
        {
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
*/
/* 35- 1
       00
       111
       0000
       11111*/
/*#include<stdio.h>

void main()
{
        int i,j,k,r;
        printf("Enter the row count\n");
        scanf("%d",&r);
        for(i=1;i<=r;i++)
        {
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
}
*/
/* 36- 1
       01
       010
       1010
       10101*/
/*#include<stdio.h>

void main()
{
        int i,j,k,r;
        printf("Enter the row count\n");
        scanf("%d",&r);
	k=1;
        for(i=1;i<=r;i++)
        {
		for(j=1;j<=i;j++)
		{
			if(k%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			k++;
		}
		printf("\n");
	}
}
*/

/* 37- 1
       11
       101
       1001
       11111*/
/*#include<stdio.h>

void main()
{
        int i,j,k,r;
        printf("Enter the row count\n");
        scanf("%d",&r);
        for(i=1;i<=r;i++)
        {
		for(j=1;j<=i;j++)
		{
			if(i==1 || j==1 || i==r || i==j)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
*/
/* 38- 1
       123
       12345
       1234567
       123456789*/
/*#include<stdio.h>

void main()
{
        int i,j,k,r;
        printf("Enter the row count\n");
        scanf("%d",&r);
        for(i=1;i<=r;i++)
        {
		k=2*i-1;
		for(j=1;j<=k;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
*/
/* 39-  1
        24
	135
	2468
	13579*/
/*#include<stdio.h>

void main()
{
        int i,j,k,r;
        printf("Enter the row count\n");
        scanf("%d",&r);
        for(i=1;i<=r;i++)
        {
		if(i%2!=0)
		{
			k=1;
			for(j=1;j<=i;j++)
			{
				printf("%d",k);
				k=k+2;
			}
			printf("\n");
		}
		else
		{
			k=2;
			for(j=1;j<=i;j++)
			{
				printf("%d",k);
				k=k+2;
			}
			printf("\n");
		}
	}
}
*/

/* 40-  1
	131
	13531
	1357531
	135797531*/
/*#include <stdio.h>

int main()
{
    int i,j,k,Cnt;
    printf("Enter the Row count\n");
    scanf("%d",&Cnt);
    for(i=1;i<=Cnt;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+2;
        }
        k=k-2;
        for(j=1;j<i;j++)
        {
            k=k-2;
            printf("%d",k);
        }
        printf("\n");
    }
}
*/

/* 41-  2
	242
	24642
	2468642
	2468108642*/
/*#include <stdio.h>

int main()
{
    int i,j,k,Cnt;
    printf("Enter the Row count\n");
    scanf("%d",&Cnt);
    for(i=1;i<=Cnt;i++)
    {
        k=2;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+2;
        }
        k=k-2;
        for(j=1;j<i;j++)
        {
            k=k-2;
            printf("%d",k);
        }
        printf("\n");
    }
}
*/

/* 42-  1
	121
	12321
	1234321
	123454321*/

/*#include <stdio.h>

int main()
{
    int i,j,k,Cnt;
    printf("Enter the Row count\n");
    scanf("%d",&Cnt);
    for(i=1;i<=Cnt;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+1;
        }
        k=k-1;
        for(j=1;j<i;j++)
        {
            k=k-1;
            printf("%d",k);
        }
        printf("\n");
    }
}
*/

/*  43- 1
	23
	456
	78910
	1112131415*/

/*#include <stdio.h>

int main()
{
    int i,j,k,p,Cnt;
    printf("Enter the Row count\n");
    scanf("%d",&Cnt);
    k = 1;
    for(i=1;i<=Cnt;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}
*/

/*  44- 1
	21
	123
	4321
	12345*/
#include <stdio.h>

int main()
{
    int i,j,k,p,Cnt;
    printf("Enter the Row count\n");
    scanf("%d",&Cnt);
    k = 1;
    for(i=1;i<=Cnt;i++)
    {
        p=i;
        for(j=1;j<=i;j++)
        {
            if(i % 2 != 0)
            {
                printf("%d",j);
            }
            else
            {
                printf("%d",p);
                p--;
            }
        }
        printf("\n");
    }
}
