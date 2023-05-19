#include<stdio.h>

int main()
{
    int n;
    float tb,sr=0;
    scanf("%d",&n);
    if(n<=199)
    {
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.20
");
        tb=n*1.20;
        printf("Bill: %.2f
",tb);
        if(tb<=400)
        {
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
        }
        else
        {
            sr=0.15*tb;
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
            
        }
    }
    else if(n>=200&&n<400)
    {
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.40
");
        tb=n*1.40;
        printf("Bill: %.2f
",tb);
        if(tb<=400)
        {
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
        }
        else
        {
            sr=0.15*tb;
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
            
        }
    }
    else if(n>=400&&n<600)
    {
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.60
");
        tb=n*1.60;
        printf("Bill: %.2f
",tb);
        if(tb<=400)
        {
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
        }
        else
        {
            sr=0.15*tb;
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
            
        }
    }
    else if(n>=600&&n<800)
    {
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 1.80
");
        tb=n*1.80;
        printf("Bill: %.2f
",tb);
        if(tb<=400)
        {
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
        }
        else
        {
            sr=0.15*tb;
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
            
        }
    }
    else if(n>=800)
    {
        printf("Units Consumed: %d
",n);
        printf("Cost per Unit: 2.00
");
        tb=n*2.00;
        printf("Bill: %.2f
",tb);
        if(tb<=400)
        {
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
        }
        else
        {
            sr=0.15*tb;
            printf("Surcharge: %.2f
",sr);
            printf("Total Amount: %.2f",tb+sr);
            
        }
    }
}