#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(;j<n+i;j++)
        {
            printf("%d",i);
        }
        
        printf("
");
    }
    
}