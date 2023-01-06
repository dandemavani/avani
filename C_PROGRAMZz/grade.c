#include<stdio.h>

void main()
{
	int a,b,c,d,e;
	float avg=0;
	printf("Enter the PASS MARKS OF 5 subjects\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        avg=(a+b+c+d+e)/5;
	if(avg>=90)
		printf("FIRST CLASS WITH DISTINCTION\n");
	else if(avg>=80&&avg<90)
		printf("FIRST CLASS\n");
	else if(avg>=70&&avg<80)
		printf("SECOND CLASS\n");
	else if(avg>=60&&avg<70)
		printf("THIRD CLASS\n");
	else if(avg>=50&&avg<40)
		printf("PASS CLASS\n");
        else
		printf("FAILED!...\n");
}
