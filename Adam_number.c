#include<stdio.h>

int rev(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r=rev(n);
    int p1=n*n;
    int p2=r*r;
    if(rev(p2)==p1)
    {
        printf("True");
    }
    else
    printf("False");
}