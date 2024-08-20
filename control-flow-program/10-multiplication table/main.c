#include <stdio.h>

int main() {
    int num, limit;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);
    printf("Enter the limit : ");
    scanf("%d", &limit);
    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
