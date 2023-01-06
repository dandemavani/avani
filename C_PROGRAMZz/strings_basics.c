/*Basics*/

//1- providing input and getting output different forms//
/*#include<stdio.h>

void main()
{
	char A[10],B[10],C[10];
	int i,j;
	printf("Enter Your name\n");
	gets(A);
	printf("\n Which is your city\n");
	scanf("%s",B);
	printf("\nYour Mother tongue\n");
	for(i=0;i<10;i++)
	{
		scanf("%c",&C[i]);
	}
	printf("\n Your Name is :");
	puts(A);
	printf("\n Your City is : %s",B);
	printf("\n YOUr mother tongue is:");
	for(i=0;i<10;i++)
	{
		printf("%c",C[i]);
	}
}
*/
//2-
/*#include<stdio.h>

void main()
{
	char A[]="hai\0";
	printf("%d",sizeof(A));
}*/

//3-
/*  #include<stdio.h>
   void main()
   {  
   
    char A[100],B[100];
    printf("Enter String-1\n");
    gets(A);
    printf("\nEnter string-2\n");
    fgets(B,sizeof(B),stdin);
    printf("\nString-1 =%s string-2 =%s",A,B);
    printf("\nString-2 =%s string-1 =%s",B,A);*/
    
    /*char A[20];
    printf("Enter the string\n");
    scanf("%s",A);
    printf("\nstring:%s",A);*/
    
    /*char a[5];
    printf("enter the string\n");
    scanf("%s",a);
    printf("\nenterd string:%s",a);*/
    
    /*char a[5];
    printf("enter the string\n");
    scanf("%4s",a);
    printf("\nenterd string:%s",a);*/
    
    /*char a[20];
    printf("enter the string\n");
    scanf("%10c",a);
    a[10]='\0';
    printf("\nenetred string:%s",a);*/
    
    /*char a[20];
    printf("enter the string\n");
    scanf("%[a-z,A-Z,0-9, ' ']",a);
    printf("\nstring:%s",a);*/

    /*char a[20];
    printf("enter the string\n");
    gets(a);
    printf("\nstring:%s",a);*/
}
*/
