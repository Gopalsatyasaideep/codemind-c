#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int z=0;
    if(n<0)
    {
        n=n*-1;
        z++;
    }
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(z==0)
    {
        printf("%d",r);
    }
    else
    {
        printf("%d",-1*r);
    }
    
}