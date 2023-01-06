#include<stdio.h>
void main()
{
	int num,
	printf("eneter the number \n");
	scanf("%d",&num);
	if(num&1)
	{
		printf("lsb bit is set %d\n",num);
	}
	else
	{
		printf("lsb bit bit is clear %d\n",num);
	}
}
