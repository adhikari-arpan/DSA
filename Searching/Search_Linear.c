#include <stdio.h>

void search(int data, int n, int a[])
{
    int flag = 0,pos;
    for(int i=0; i<n; i++)
    {
        if(data == a[i])
        {
            flag=1;
            pos = i+1;
        }
    }
    if(flag == 1)
    {
        printf("Data is found at %d position",pos);
    }
    else
    {
        printf("Data is not found");
    }
}

int main()
{
    int a[100], data, n;
    printf("Enter number of array elements\n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter data to be searched\n");
    scanf("%d", &data);
    search(data,n,a);
    return 0;
}