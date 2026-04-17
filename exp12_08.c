//Write a macro to calculate the square of a number.//
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int num = 4;
    printf("Square = %d\n", SQUARE(num));

    return 0;
}