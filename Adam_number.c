#include <stdio.h>
int sq(int n)
{
    int s=n*n;
    return s;
}
int rev(int n)
{
    int r,s=0;
    while(n!=0)
    {
    r=n%10;
    s=(s*10)+r;
    n=n/10;
    }
    return s;
}
int main()
{
    int n,r,p,o,ans;
    scanf("%d",&n);
    r=sq(n);
    p=rev(n);
    o=sq(p);
    ans=rev(o);
    if(r==ans)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}