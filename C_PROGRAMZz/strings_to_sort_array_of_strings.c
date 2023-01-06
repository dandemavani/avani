/*TO DO SORTING OF ARRAY OF STRINGS*/

#include <stdio.h>
#include<string.h>

int main()
{
    char Colours[6][10],Temp[10];
    int i,j;
    printf("Enter colors in to array\n");
    for(i=0;i<6;i++)
    {
        scanf("%s[^\n]",Colours[i]);
    }
    printf("\nEntered colours strings before Sorting\n");
    for(i=0;i<6;i++)
    {
        puts(Colours[i]);
    }
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(strcmp(Colours[i],Colours[j]) > 0)
            {
                strcpy(Temp,Colours[i]);
                strcpy(Colours[i],Colours[j]);
                strcpy(Colours[j],Temp);
            }
        }
    }
    printf("\n Array of colours strings after sorting\n");
    for(i=0;i<6;i++)
    {
        puts(Colours[i]);
    }
}

