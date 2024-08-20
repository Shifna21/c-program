#include <stdio.h>
#include <math.h>

int main() {
    int start = 1, end = 1000;

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        int original_num = num;
        int sum = 0;
        int digits = 0;
        while (original_num != 0) {
            original_num /= 10;
            digits++;
        }

        original_num = num;
        while (original_num != 0) {
            int digit = original_num % 10;
            sum += pow(digit, digits);
            original_num /= 10;
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
