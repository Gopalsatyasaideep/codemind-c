#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int p=1,s=0,r;
    while(n>0)
    {
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
    }
    if(p==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}