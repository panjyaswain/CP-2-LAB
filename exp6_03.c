//Write a program to reverse the elements of an array in-place using pointers.//
#include<stdio.h>

int main() {
    int a[5], temp, i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse array
    for(i = 0; i < 2; i++) {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
