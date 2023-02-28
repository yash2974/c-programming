#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
    int n,c,us=0,cs=0;
    printf("rock paper scissors\nPress anything to start\n");
    getch();
    for (int i = 0; i < 3; i++)
    {
    printf("press 1 for rock\npress 2 for paper\npress 3 for scissors\n");
    scanf("%d",&n);
    srand(time(NULL));
    c=rand()%2;
    if (c==0)
    {
        printf("computer choosed rock\n");

    }
    else if (c==1)
    {
        printf("computer choosed paper\n");
    }
    else
    printf("computer choosed scissors\n");
    
    

 
    if ((c==0&&n==3)||(c==1&&n==1)||(c==2&&n==2))
    {
        printf("Computer wins!!!\n");
        cs++;
    }
    else if ((n==1&&c==2)||(n==2&&c==0)||(n==3&&c==1))
    {
        printf("user wins!!!\n");
        us++;
    }
    else
    printf("TIE\n");
    }
    printf("score\nuser=%d\tcomputer=%d",us,cs);
    
    return(0);
    
}
