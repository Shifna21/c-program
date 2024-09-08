#include <stdio.h>

int main() {
    int arr[6];
    int i;
    printf("Enter 6 integers:\n");
    for (i = 0; i < 6; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
