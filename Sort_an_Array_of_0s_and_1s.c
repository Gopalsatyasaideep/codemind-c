#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int zs=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==0)
        {
            zs++;
        }
    }
    int i;
    for(i=0;i<zs;i++)
    {
        x[i]=0;
    }
    for(;i<n;i++)
    {
        x[i]=1;
    }
    for(int j=0;j<n;j++)
    {
        printf("%d ",x[j]);
    }
    
}