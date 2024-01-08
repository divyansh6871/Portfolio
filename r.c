#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int linear_search(int arr[], int size, int find)
{
    for (int i = 0; i < size; i++)
    {
        if (find == arr[i])
        {
            return i + 1;
        }
    }
    return -1;
}

void bubblesort(int a[], int s)
{
    printf("\nArray is ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < s - 1; i++)
    {
        for (int j = 0; j < s - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nAfter sorting Array is ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
}

void binarySearch(int array[], int x, int low, int high)
{
    int i = 0;
    int mid;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
        {
            i++;
            break;
        }
        else if (array[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (i)
    {
        printf("Found");
    }
    else
        printf("Not found");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    // printf("%d", size);
    // int p = linear_search(arr, 20, 62);
    // if (p > 0)
    // {
    //     printf("Element found at position : %d.", p);
    // }
    // else
    //     printf("Element not found");
    // bubblesort(arr, size);
    binarySearch(arr, 6, 0, size - 1);
    return 0;
}