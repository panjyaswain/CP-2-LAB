//Write a program using #define to declare constants and use them in arithmetic operations.//
#include <stdio.h>

#define A 10
#define B 5

int main() {
    int sum = A + B;
    int product = A * B;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}