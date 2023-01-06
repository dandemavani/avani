/*NESTED STRUCTURE EXAMPLE*/

#include<stdio.h>

struct student
{
    char Name[20];
    struct Academics
    {
        int Roll_no;
        float Marks;
    }A1;
}S1;

void main()
{
    printf("Enter the Name of student\n");
    scanf("%s[^\n]",S1.Name);
    printf("\nEnter the roll number\n");
    scanf("%d",&S1.A1.Roll_no);
    printf("\nEnter the Marks\n");
    scanf("%f",&S1.A1.Marks);
    printf("\n*************************************************");
    printf("\nName :- %s\n",S1.Name);
    printf("\nRoll_Number :- %d\n",S1.A1.Roll_no);
    printf("\nMarks :- %.2f\n",S1.A1.Marks);
}
