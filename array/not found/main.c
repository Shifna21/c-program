#include <stdio.h>

int main() {
    int arr[10] = {15, 3, 7, 8, 20, 6, 12, 4, 9, 11}; 
    int number, i;
    int found = 0; 
    printf("Enter a number to search: ");
    scanf("%d", &number);
    for (i = 0; i < 10; i++) {
        if (arr[i] == number) {
            printf("Number %d found at position %d\n", number, i + 1); 
            found = 1; 
            break; 
        }
    }
    if (!found) {
        printf("Not Found\n");
    }

    return 0;
}
