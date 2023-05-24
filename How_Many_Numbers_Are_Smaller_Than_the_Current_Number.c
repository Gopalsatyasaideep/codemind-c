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
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                if(x[i]>x[j])
                {
                    c++;
                }
            }
        }
        printf("%d ",c);
    }
}