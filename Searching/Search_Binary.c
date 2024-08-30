#include <stdio.h>

int search(int data, int a[], int left, int right)
{
    if (left > right)
    {
        return -1;
    }

    int mid = (left + right)/2;
    if (data == a[mid])
    {
        return mid;
    }
    else if (data > a[mid])
    {
        return search(data, a, mid + 1, right);
    }
    else
    {
        return search(data, a, left, mid - 1);
    }
}

int main()
{
    int a[100], data, n, left, right, index;
    printf("Enter number of array elements\n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter data to be searched\n");
    scanf("%d", &data);
    left = 0;
    right = n - 1;
    index = search(data, a, left, right);
    if (index == -1)
    {
        printf("Data not found\n");
    }
    else
    {
        printf("Data successfully found at %d position", index+1);
    }
    return 0;
}