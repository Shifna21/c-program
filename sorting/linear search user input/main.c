#include <stdio.h>

void linearSearch(int arr[], int size, int searchElement) 
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == searchElement) 
        {
            printf("Element %d found at index %d\n", searchElement, i);
            return;
        }
    }
    printf("Element %d not found in the array\n", searchElement);
}

int main() {
    int size, searchElement, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements of the array: \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    linearSearch(arr, size, searchElement);
    return 0;
}
