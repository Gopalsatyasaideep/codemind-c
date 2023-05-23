#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int p=1,s=0,r;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    printf("%d",p-s);
}