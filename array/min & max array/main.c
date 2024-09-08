#include <stdio.h>

int main() {
    int arr[8] = {12, 5, 7, 19, 3, 17, 10, 6}; 
    int max, min,i;
    max = min = arr[0];
    for (i = 1; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; 
        }
        if (arr[i] < min)
        {
            min = arr[i]; 
        }
    }
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);

    return 0;
}
