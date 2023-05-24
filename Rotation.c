#include<stdio.h>
void rotate(int *arr,int a,int b)
{
    int i,j,k;
    for(i=0;i<b;i++)
    {
        int ft=arr[0];
        arr[0]=arr[a-1];
        for(j=1;j<a;j++)
        {
            int temp=arr[j];
            arr[j]=ft;
            ft=temp;
        }
    }
}
int main()
{
    int t,n;
    scanf("%d",&t);
    for(n=0;n<t;n++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int arr[a],i,j;
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
        rotate(arr,a,b);
        for(i=0;i<a;i++)
        {
            if(i==a-1)
            {
                printf("%d
",arr[i]);
            }
            else
            {
                printf("%d ",arr[i]);
            }
        }
    }
}