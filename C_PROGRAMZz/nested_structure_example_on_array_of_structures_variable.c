/*ARRAY OF STRUCTURES*/

#include<stdio.h>

struct student
{
    char Name[20];
    struct Academics
    {
        int Roll_no;
        float Marks;
    }A1;
}S1[10];

void main()
{
    int i,size;
    printf("\nEnter the size of Array\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\nEnter %dth Name of student\n",i+1);
        scanf("%s[^\n]",S1[i].Name);
        printf("\nEnter the roll number\n");
        scanf("%d",&S1[i].A1.Roll_no);
        printf("\nEnter the Marks\n");
        scanf("%f",&S1[i].A1.Marks);
        printf("\n*************************************************");
    }
    for(i=0;i<size;i++)
    {
        printf("\nName :- %s\n",S1[i].Name);
        printf("\nRoll_Number :- %d\n",S1[i].A1.Roll_no);
        printf("\nMarks :- %.2f\n",S1[i].A1.Marks);
        printf("\n______________________________________________________");
    }
}
