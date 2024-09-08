#include <stdio.h>

int main() {
    int arr[7] = {5, 12, 7, 18, 9, 10, 22};
    int evenCount = 0; 
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; 
        }
    }
    printf("Number of even elements in the array: %d\n", evenCount);

    return 0;
}
