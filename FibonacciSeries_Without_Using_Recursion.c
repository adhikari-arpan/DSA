//Fibonacci series without using recursion
#include<stdio.h>
int main()
    {
        int i,n,a=0,b=1,c;
        printf("Enter the value of number of fibonnaci element that should be generated\n");
        scanf("%d",&n);
        printf("%d\t%d\t",a,b);
        for(i=0;i<n-2;i++)
        {
            c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;
        }
        return 0;
    }