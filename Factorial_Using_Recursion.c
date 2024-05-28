//Find factorial of number using Recursion.
#include<stdio.h>
int fact(int num);
    int main()
    {
        int num,result;
        printf("Enter the value of number to find the factorial\n");
        scanf("%d",&num);
        result = fact(num);
        printf("The factorial of number is %d",result);
        return 0;
    }
    int fact(int num)
    {
        if(num==0||num==1)
        {
            return 1;
        }
        else
        {
            return num*fact(num-1);
        }
    }
