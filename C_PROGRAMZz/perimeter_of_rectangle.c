#include<stdio.h>

void main()
{
	int length,breadth, perimeter;
	printf("Enter the length and breadth of a rectangle accordingly\n");
	scanf("%d%d",&length,&breadth);
	perimeter=2*(length+breadth);
	printf("PERIMETER OF %d and %d size rectangle is %d",length,breadth,perimeter);
}
