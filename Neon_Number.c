#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s=0,r,m=n;
    n=n*n;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(s==m)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}