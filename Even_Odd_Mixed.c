#include<stdio.h>


int main()
{
    int n,ev=0,od=0,r;
    scanf("%d",&n);
    int k=0;
    while(n>0)
    {
        r=n%10;
        k++;
        if(r%2==0)
        {
            ev++;
        }
        else
        {
            od++;
        }
        n=n/10;
    }
    if(ev==k)
    {
        printf("Even");
    }
    else if(od==k)
    {
        printf("Odd");
        
    }
    else
    {
        printf("Mixed");
    }
}