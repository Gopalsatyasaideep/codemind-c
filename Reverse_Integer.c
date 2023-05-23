#include<stdio.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    if(n<0)
    {
        n=n*(-1);
        k++;
    }
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(k==0)
    {
        printf("%d",r);
    }
    else
    {
        printf("%d",r*(-1));
    }
}