//Find factorial of a number without using recursion.
#include<stdio.h>
int main()
    {
        int i,num,result=1;
        printf("Enter the value of number to find the factorial\n");
        scanf("%d",&num);
        if(num<0)
        {
            printf("Factorial is not defined for negative numbers\n");
        }
        else
        {
        for(i=1;i<=num;i++)
        {
            result=result*i;
        }
        printf("The factorial of number is %d",result);
        }
        return 0;
    }