#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max1=a>b?a:b,max2;
    int min=a<b?a:b;
    if(max1>c)
    {
        if(c>min)
        {
            max2=c;
        }
        else
        {
            max2=min;
        }
    }
    else
    {
        max2=c;
    }
    printf("%d",max1+max2);
}