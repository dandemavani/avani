#include <stdio.h>

struct Employee
{
    int hour;
    int minute;
    int second;
}T[2];

void main()
{
    int i,j,H,M,S;
    printf("\nEnter times to array\n");
    for(i=0;i<2;i++)
    {
        printf("\nEnter %dth time\n",i+1);
        printf("\nEnter Hour :- \n");
        scanf("%d",&T[i].hour);
        printf("\nEnter Minute:- \n");
        scanf("%d",&T[i].minute);
        printf("\nEnter seconds :- \n");
        scanf("%d",&T[i].second);
        printf("\n************************************************************************");
    }
    
    printf("\nYou Entered Time Details\n");
    for(i=0;i<2;i++)
    {
        printf("\n%dth time details\n",i+1);
        printf("\nHour :- %d\n",T[i].hour);
        printf("\nMinute :- %d\n",T[i].minute);
        printf("\nSeconds :- %d\n",T[i].second);
        printf("\n____    ____    ____    ____    ____    ____    ____    ____    ____");
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<2;j++)
        {
                H = T[j].hour - T[i].hour;
                M = T[j].minute - T[i].minute;
                S = T[j].second - T[i].second;
        }
    }
    if(H < 0)
    {
        H = -1 * H;
    }
    else
    {
        H = H;
    }
    if(M < 0)
    {
        M = -1 * M;
    }
    else
    {
        M = M;
    }
    if(S < 0)
    {
        S = -1 * S;
    }
    else
    {
        S = S;
    }
    printf("\nTotal Time difference between two entered times are : %dHours...%dMinutes...%dSeconds\n",H,M,S);
}
