#include <stdio.h>
int recursiveBinarySearch(int arr[], int left, int right, int searchElement)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == searchElement) 
        {
            return mid;
        }
        if (arr[mid] > searchElement)
        {
            return recursiveBinarySearch(arr, left, mid - 1, searchElement);
        }
        return recursiveBinarySearch(arr, mid + 1, right, searchElement);
    }
    return -1;
}

int main()
{
    int size, searchElement, i;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d sorted elements of the array: \n", size);
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    int result = recursiveBinarySearch(arr, 0, size - 1, searchElement);

    if (result != -1) 
    {
        printf("Element %d found at index %d\n", searchElement, result);
    } else
    {
        printf("Element %d not found in the array\n", searchElement);
    }

    return 0;
}
