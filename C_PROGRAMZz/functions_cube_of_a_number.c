/*TO FIND CUBE OF A NUMBER*/

#include<stdio.h>

int cube(int Side);

void main()
{
	int Side;
	printf("\nEnter the side\n");
	scanf("%d",&Side);
	printf("\nCube =%d\n",cube(Side));
}
int cube(int Side)
{
	return(Side * Side * Side);
}

