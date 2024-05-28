//Sum of n natural numbers using recursion
#include<stdio.h>
int sum(int num);
    int main()
    {
        int num,result;
        printf("Enter the value of number upto which he sum is to be calculated\n");
        scanf("%d",&num);
        result = sum(num);
        printf("The sum of number is %d",result);
        return 0;
    }
    int sum(int num)
    {
        int sum1=0,i;
        for(i=1;i<=num;i++)
        {
            sum1=sum1+i;
        }
        return sum1;
    }
