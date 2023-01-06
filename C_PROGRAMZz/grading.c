#include<stdio.h>

void main()
{
	int a,b,c,d;
	float avg=0;
	printf("ENTER THE MARK-1\n");
	scanf("%d",&a);
	goto check1;
M2:	printf("ENTER THE MARK-2\n");
        scanf("%d",&b);
        goto check2;
M3:     printf("ENTER THE MARK-3\n");
        scanf("%d",&c);
	goto check3;
M4:	avg=(a+b+c)/3;
	printf("AVERAGE OF 3 SUBJECTS:-%.2f\n",avg);
	if(avg>=80)
	{
		printf("FIRST CLASS WITH DISTINCTION\n");
		goto END;
	}
	else if(avg>=60&&avg<80)
	{
		printf("second class\n");
		goto END;
	}
	else
	{
		printf("JUST FAILED\n");
		goto END;
	}
check1:   if(a<40)
	 {
		 printf("FAILED IN FIRST subject\n");
		 goto M2;
	 }
	  else
		  goto M2;
check2:   if(b<40)
         {
                 printf("FAILED IN SECOND SUNBJECT\n");
                 goto M3;
	 }
	  else
		  goto M3;
check3:   if(c<40)
         {
                 printf("FAILED IN THIRD SUBJECT\n");
                 goto M4;
         }
	  else
		  goto M4;
         
END:
	 printf(" ");
}

