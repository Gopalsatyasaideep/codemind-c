#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-2;j++)
        {
            printf("%d",j);
        }
        int k=n-3;
        for(int j=k;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("
");
    }
}