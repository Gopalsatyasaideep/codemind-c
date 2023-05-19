#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int d1,d2;
    int a =0;
    int b =1;
    int s= 0;
    while(s<n)
    {
        s = a+b;
        a=b;
        b=s;
        
    }
    
    d1 = s-n;
    d2 = n-a;
    
    if(d1 == d2)
    {
        printf("%d %d",a,s);
    }
    else if(d1<d2)
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",a);
    }
    
}