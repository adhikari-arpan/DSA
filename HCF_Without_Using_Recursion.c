//HCF without using recursion
#include<stdio.h>
int main()
{
    int a,b,i,min,hcf;
    printf("Enter the value of two numbers to find the HCF");
    scanf("%d%d",&a,&b);
    min=(a>b)?a:b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    printf("The Highest Common factor is %d",hcf);
    return 0;
}
