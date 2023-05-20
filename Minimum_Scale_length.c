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
    int min=x[0];
    int i=1;
    while(i<n)
    {
        if(x[i]%min==0)
        {
            i++;
        }
        else
        {
            min=x[i]%min;
            
        }
        
    }
    printf("%d",min);
}