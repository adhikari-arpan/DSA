#include <stdio.h>

void quick(int a[], int low, int high)
{
    int left = low;
    int right = high;
    int pivot = left;

    if (low >= high)
    {
        return;
    }

    while (left < right)
    {
        while (a[pivot] <= a[right])
        {
            right--;
        }
        if (a[pivot] > a[right])
        {
            int temp = a[pivot];
            a[pivot] = a[right];
            a[right] = temp;
            pivot = right;
        }
        while (a[pivot] >= a[left])
        {
            left++;
        }
        if (a[pivot] < a[left])
        {
            int temp = a[pivot];
            a[pivot] = a[left];
            a[left] = temp;
            pivot = left;
        }
    }
    quick(a, pivot + 1, high);
    quick(a, low, pivot - 1);
}

