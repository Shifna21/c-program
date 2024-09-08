#include <stdio.h>

int main() {
    int arr[10] = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29}; 
    int i;
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = 0; 
        } else {
            arr[i] = 1;
        }
    }
    printf("Modified array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
