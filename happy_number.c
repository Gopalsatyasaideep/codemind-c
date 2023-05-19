#include<stdio.h>

int check(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r);
        n=n/10;
        
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r,s;
    do
    {
        s=check(n);
        n=s;
    }while(n>9);
    if(n==1||n==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}