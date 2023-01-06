#include<stdio.h>

void main()
{
	//normal array program
/*	int a[10],i;
	printf("Enter elements to array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered array elements are\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
*/
	//segmentation fault
/*	int a[10],i;
        printf("Enter elements to array\n");
        scanf("%d",&a[i]);
        printf("Entered array elements are\n");
        for(i=0;i<10;i++)
        {
                printf("%d\t",a[i]);
        }
*/
	//array initialisation
/*	int i,a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Entered elements are:-");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
*/

/*	int i,a[10]={1,2,3,4,5};
	printf("Entered the elements\n");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
*/

/*	int i,a[5]={1,2,3,4,5,6,7,8};
	printf("Entered elements are\n");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
*/

/*	int i,a[5];
	a[5]={1,2,3,4,5};
	printf("Entered elements are\n");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
*/

/*	float a[4]={1.2,2.3,3.4,4.5};
	int i;
	printf("entered elements are:");
	for(i=0;i<4;i++)
	{
		printf("%.2f\n",a[i]);
	}
*/
	//address printing
/*	int i,a[4]={2,4,6,8};
	printf("Address locations of arrays are as follows\n");
	for(i=0;i<4;i++)
	{
		printf("a[%d]=%p\n",i,&a[i]);
	}
*/

/*	int i,a[10];
	printf("Enter array elements \n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(i=0;i<10;i++)
	{
		printf("a[%d] -> %d -> %p\n",i,a[i],&a[i]);
	}
*/


/*	int i,a(6)={1,2,3,4,5,6};
	printf("enter elements\n");
        for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
*/

/*	int a=23.4;
	printf("%d",a);
*/	


/*	int i,a[10]={-1,2,3,4,5,6,7,8,9,10};
	printf("array elements are\n");
	for(i=-3;i<7;i++)
	{
		printf("%d\t",a[i]);
	}
*/


	int a[4]={1,2,3,4};
	printf("%d \t %d \t %d \t %d\n",a[0],a[1],a[2],a[3]);
	printf("%p \t %p \t %p \t %p\n",&a[0],&a[1],&a[2],&a[3]);
	printf("%p \t %p \t %p \t %p\n",a,a+1,a+2,a+3);

}
