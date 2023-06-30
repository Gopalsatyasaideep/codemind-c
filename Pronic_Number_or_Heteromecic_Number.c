#include <stdio.h>
int main()
{
    int a,flag;
    scanf("%d",&a);
    for(int i=1; i<a; i++)
    {
        if(i*(i+1)==a)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}