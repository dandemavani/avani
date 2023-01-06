/*TO PRINT DETAILS OF A STUDENT*/

#include<stdio.h>

union student
{
	char Name[20];
	int Roll_no;
	float Marks;
}s1;

void main()
{
	printf("Enter the Name\n");
	scanf("%[^\n]",s1.Name);
	printf("\nEnter the roll number\n");
	scanf("%d",&s1.Roll_no);
	printf("\nEnter Marks\n");
	scanf("%f",&s1.Marks);
	printf("\n--------------------------------------");
	printf("\nName :- %s\n",s1.Name);
	printf("\nRoll number :- %d\n",s1.Roll_no);
	printf("\nMarks :- %f\n",s1.Marks);
	printf("\n---------------------------------------");

}

