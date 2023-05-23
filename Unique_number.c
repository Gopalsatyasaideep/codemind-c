#include<stdio.h>

int dc(int n)
{
    int r,k=0;
    while(n>0)
    {
        r=n%10;
        k++;
        n=n/10;
    }
    return k;
}

int check(int n,int m)
{
    int k=0,r;
    while(m>0)
    {
        r=m%10;
        if(n==r)
        {
            k++;
        }
        m=m/10;
    }
    if(k==1)
    {
        return 0;
    }
    else
    {
        return 1;
        
    }
}
int main()
{
    int n,r;
    scanf("%d",&n);
    int m=n,k=0;
    while(n>0)
    {
        r=n%10;
        if(check(r,m))
        {
            k++;
            break;
            
        }
        n=n/10;
        
    }
    if(k==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}