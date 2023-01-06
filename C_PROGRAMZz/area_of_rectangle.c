#include<stdio.h>

void main()
{
	int length,breadth,area=0;
	printf("Enter length and breadth of rectangle accordingly\n");
	scanf("%d%d",&length,&breadth);
	area=length * breadth;
	printf("AREA OF RECTANGLE  having %d and %d size is %d\n",length,breadth,area);
}
