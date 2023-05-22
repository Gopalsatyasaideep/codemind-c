#include<stdio.h>
int main()
{
    int te;
    scanf("%d",&te);
    for(int j=1;j<=te;j++)
    {
        int n;
        scanf("%d",&n);
        int x[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
            
        }
        int t,s=0,c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(x[i]>x[j])
                {
                    t=x[i];
                    x[i]=x[j];
                    x[j]=t;
                    c++;
                }
            }
            
        }
        if(c==0)
        {
            printf("0
");
        }
        else
        {
            s=x[n-1]-x[0];
            printf("%d
",s);
        }
    }
}