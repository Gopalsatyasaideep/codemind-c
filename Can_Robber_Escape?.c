#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k=0;
    for(int j=0; j<n; j++)
    {
        if(a[j]<n)
        {
            k=1;
        }
        else
        {
            k=0;
            break;
        }
        
    }
    if(k==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}