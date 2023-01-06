/*TO MAKE A CALCULATOR USING INTERACTIVE MENU*/

#include<stdio.h>
#include<stdlib.h>

int A[20][20],B[20][20],C[20][20],i,j,Size;

void Add();
void Sub();
void Mul();

void main()
{
    do
    {
    int Choice;
    //char Ch;
    printf("\n1-Addition\t2-Substraction\t3-Multiplication\n");
    printf("Please select your choice accordingly from above list\n");
    scanf("%d",&Choice);
        if(Choice < 1 || Choice > 3)
        {
            printf("\nYou entered Invalid Option\n");
            exit(0);
        }
        else
        {
            switch(Choice)
            {
                case 1:
                        Add();
                        break;
                case 2:
                        Sub();
                        break;
                case 3:
                        Mul();
                        break;
            }
            printf("\nIf you Want Another Try?....Press Y....If you don't want?....Press N\n");
    }while((getchar() == 'Y') || (getchar() == 'y'));
}

void Add()
{
    printf("Enter the size of array\n");
scanf("%d",&Size);
    printf("\nEnter %d element to 1st array\n",Size);
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        scanf("%d",&A[i][j]);
    }
}
printf("\nEnter elements to %d elements to 2nd array\n",Size);
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        scanf("%d",&B[i][j]);
    }
}
printf("\n1st Array\n");
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        printf("%d\t",A[i][j]);
    }
        printf("\n");
}
printf("\n1st Array\n");
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        printf("%d\t",B[i][j]);
    }
        printf("\n");
}
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSum  of 2 Arrays are as follows\n");
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

void Sub()
{
    printf("Enter the size of array\n");
scanf("%d",&Size);
    printf("\nEnter %d element to 1st array\n",Size);
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        scanf("%d",&A[i][j]);
    }
}
printf("\nEnter elements to %d elements to 2nd array\n",Size);
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        scanf("%d",&B[i][j]);
    }
}
printf("\n1st Array\n");
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        printf("%d\t",A[i][j]);
    }
        printf("\n");
}
printf("\n1st Array\n");
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        printf("%d\t",B[i][j]);
    }
        printf("\n");
}
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\nDifference of 2 Arrays are as follows\n");
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

void Mul()
{
    printf("Enter the size of array\n");
scanf("%d",&Size);
    printf("\nEnter %d element to 1st array\n",Size);
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        scanf("%d",&A[i][j]);
    }
}
printf("\nEnter elements to %d elements to 2nd array\n",Size);
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        scanf("%d",&B[i][j]);
    }
}
printf("\n1st Array\n");
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        printf("%d\t",A[i][j]);
    }
        printf("\n");
}
printf("\n1st Array\n");
for(i=0;i<Size;i++)
{
    for(j=0;j<Size;j++)
    {
        printf("%d\t",B[i][j]);
    }
        printf("\n");
}
    int k;
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            C[i][j] = 0;
            for(k=0;k<Size;k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
        }
    }
    printf("\nProduct of 2 Arrays are as follows\n");
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
}


