//6. Implement a program to reverse the digits of a given integer using call by reference. //
#include <stdio.h>

void reverse(int *num) {
    int n = *num, rev = 0;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    *num = rev;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    reverse(&num);

    printf("Reversed number: %d", num);
    return 0;
}

