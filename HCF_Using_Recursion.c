//HCF using recursion
#include<stdio.h>
int hcf(int x,int y);
int main()
{
    int a,b,result;
    printf("Enter the value of two numbers to find the HCF");
    scanf("%d%d",&a,&b);
    result = hcf(a,b);
    printf("The Highest Common factor is %d",result);
    return 0;
}
int hcf(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return hcf(y,x%y);
    }
}