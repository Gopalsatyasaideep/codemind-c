#include<stdio.h>
int sod(int n)
{
    int s=0,r;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    int r,t;
    t=sod(n);
    while(t>9)
    {
        r=sod(t);
        t=r;
    }
    printf("%d",t);
}