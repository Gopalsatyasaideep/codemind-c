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
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]!=0&&x[j]!=0)
                {
                    if(x[j]==x[i])
                    {
                        x[i]=0;
                        x[j]=0;
                        c++;
                    }
                }
            }
        }
    }
    printf("%d",c);
}