#include<stdio.h>

void main()
{
/*	int a=9;
	if(a=5)
		printf("a is five\n");
	else
		printf("a is not five\n");
	printf("value of a is %d\n",a);
*/

/*	int a =	0;
	if(a = 0)
	{
		printf("a is zero\n");
	}
	else
	{
		printf("a is not zero\n");
	}
	printf("value of a is %d\n",a);
*/

/*	int i = 10;
	i == 50;
	printf("%d\t",i);
	if(i == 50)
		printf("i is fifty\n");
	else
		printf("i is not fifty\n");
*/

/*	int a=20,b=3;
	if(a<10)
		a=a-5;
		b=b+5;
	printf("%d    %d\n",a,b);
*/

/*	int a=9,b=0,c=0;
	if(!a<10 && !b||c)
		printf("c in depth\n");
	else
		printf("see in depth\n");

*/


/*	int i=1,j=9;
	if(i>=5 && j<5)
		i=j+2;
	printf("%d\n",i);
*/

/*	int a=0,b=0;
	if(!a)
	{
		b=!a;
		if(b)
			a=!b;
	}
	printf("%d  %d\n",a,b);
*/

/*	int a=2,x=10;
	if(a==2)
		if(x==8)
			printf("a is 2 and x is 8\n");
	else
		printf("a is not 2\n");	
*/


	/*x+=a<b? (-x) : 100*/


/*	int x,a,b;
	x=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	x = x + a < b;
//	printf("%d",x);
	if(x)
	{
		printf("%d",-x);
	}
	else
	{
		printf("100");
	}
*/

/*	int z,x,y;
	z = 0;
	y=7;
	printf("enter a number\n");
	scanf("%d",&x);
	z = (x == 0) ? y++ : (x > 0) ? y-- : (x < 0) ? y= y+2 : 0;
	printf("%d\t",z);
*/

/*	int a,b,c;
	printf("enter 3 nos\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a == 10)
	{
		if(b == 20)
		{
			if(c == 30)
			{
				printf("a is 10,b is 20,c is 30\n");
			}
			
		}
		else
		{
			printf("a is  10,b is not 20\n");
		}
		
	}
	else
	{
		printf("a is not 10\n");
	}
*/

/*	int k=10;
	switch(k)
	{
		case '5':
		case '10':
			k++;
			continue;
		case '15':
		case '20':
			k--;
	}
*/


/*	int var=2,x=1,y=2;
	switch(var)
	{
		case x:
			x++;
			break;
		case y:
			y++;
			break;
	}
*/


	int i,total=0;
	for(i=1;i<=10;i++)
	{
		switch(i)
		{
			case 1:
			case 4:
			case 5:
			case 7:
				total+=i;
				break;
			default:
				continue;
		}
		printf("%d\t",i);
	}
	printf("total =%d\n",total);	
}
