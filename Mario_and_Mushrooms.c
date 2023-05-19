#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x=n%3;
    if(x==1)
    {
        printf("HUGE");
    }
    else if(x==2)
    {
        printf("SMALL");
    }
    else
    {
        printf("NORMAL");
    }
}