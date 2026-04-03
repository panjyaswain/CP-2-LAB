//write a program to swap two numbers using call by reference.//
#include<stdio.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x = 10, y = 20;

    swap(&x, &y);

    printf("x: %d, y: %d\n", x, y);
    return 0;
}

