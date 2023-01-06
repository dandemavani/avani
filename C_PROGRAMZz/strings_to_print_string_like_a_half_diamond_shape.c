#include <stdio.h>

int main()
{
    char c[]="malayalam";
    int i,j,n,len=0;
    for(i=0;c[i]!='\0';i++)
    {
        len++;
    }
    n=2*len;
    printf("------------------\n");
    for(i=0;i<=n;i++)
    {
        if(i<len)
        {
            for(j=0;j<=i;j++)
            {
                printf("%c",c[j]);
                
            }
            printf("\n");
        }
        else if(i==len)
        {
            printf("------------------\n");
        }
        else
        {
            
            for(j=0;j<len;j++)
            {
                printf("%c",c[j]);
            }
            len--;
            printf("\n");
        }
    }
    printf("------------------");
    return 0;
}

