#include<stdio.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0&&n/i==i)
        {
            printf("True");
            k++;
            break;
        }
    }
    if(k==0)
    {
        printf("False");
    }
}