/*TO FIND ADDRESS AND LOCATION OF STRUCTURE VARIABLES*/

#include<stdio.h>

struct student
{
        char Name[20];
	char Ch;
        int Roll_no;
        int Class;
        float Marks;
};

void main()
{
        struct student S1;
        printf("Enter the Name of student\n");
        scanf("%[^\n]",S1.Name);
        printf("\nEnter the Roll Number of Student\n");
        scanf("%d",&S1.Roll_no);
        printf("\nEnter the student belongs to which class\n");
        scanf("%d",&S1.Class);
        printf("\nEnter the mark of student\n");
        scanf("%f",&S1.Marks);
        printf("\n-----------------------------------------");
        printf("\nNAME :- %s",S1.Name);
        printf("\nROLL_NUMBER :- %d",S1.Roll_no);
        printf("\nCLASS :- %d",S1.Class);
        printf("\nMARKS :- %.2f",S1.Marks);
	printf("\n------------------------------------------");
	printf("\nAddress of Name :- %p",&S1.Name);
	printf("\nAddress of Ch :- %p",&S1.Ch);
	printf("\nAddress of Roll_Number :- %p",&S1.Roll_no);
	printf("\nAddress of Class :- %p",&S1.Class);
	printf("\nAddress of Marks :- %p",&S1.Marks);
	//printf("\nAddress of Marks :- %p",&S1.Ch);
}

