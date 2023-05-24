#include<stdio.h>

int main()
{
    char c[6]={'0','A','B','C','D','E'};
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}