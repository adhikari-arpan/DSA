#include <stdio.h>
int i, j, n, a[100],temp;

void bubble_sort(int a[], int n)
{
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = a[j];
            }
        }
    }
}

int main()
{
   
    
}