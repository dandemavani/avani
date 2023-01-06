/*TO STORE DETAILS OF A STUDENT USING STRUCTURE*/

#include<stdio.h>

struct student
{
	char Name[20];
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
}
