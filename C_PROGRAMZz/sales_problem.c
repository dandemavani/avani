#include<stdio.h>
#define BASE_SALARY 1500
#define BONUS 200
#define COMMISSION 0.02
void main()
{
	
	int Quantity;
	float Gross_Salary,Price,Bonus,Commission;
	printf("Enter the total number of quantities sold and price for one piece\n");
	scanf("%d%f",&Quantity,&Price);
        Bonus=Quantity * BONUS;
	Commission=COMMISSION * Quantity * Price;
	Gross_Salary=BASE_SALARY + Bonus + Commission;
	printf("GROSS SALARY=%.2f\n",Gross_Salary);

}
