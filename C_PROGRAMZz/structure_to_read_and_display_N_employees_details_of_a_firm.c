/*TO READ AND WRITE DETAILS OF N EMPLOYEES DETAILS IN A FIRM*/

#include<stdio.h>

struct Employee
{
	char Name[20];
	int Id;
	float Salary;
}E[20];

void main()
{
	int i,Size;
	printf("\nEnter the total number of Employees\n");
	scanf("%d",&Size);
	printf("\nEnter detail of Employees\n");
	for(i = 0; i < Size; i++)
	{
		printf("\nEnter %dth Employee details\n",i+1);
		printf("Enter Name of Employee :- \n");
		scanf("%s[^\n]",E[i].Name);
		printf("Enter ID_Number Employee :- \n");
                scanf("%d",&E[i].Id);
		printf("Enter Salary of Employee :- \n");
                scanf("%f",&E[i].Salary);
		printf("\n******************************************");
	}
	printf("\nDetails of Employess\n");
	for(i = 0; i < Size; i++)
	{
		printf("\nDetails of %dth Employee\n",i+1);
	        printf("\nName :- %s\n",E[i].Name);
		printf("\nID_Number :- %d\n",E[i].Id);
		printf("\nSalary :- %.2f\n",E[i].Salary);
		printf("____    ____    ____    ____    ____    ____    ____");
	}
}


