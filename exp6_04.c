//Implement a function to calculate the sum of all elements in an array using pointers.//
#include<stdio.h>
int sum(int *p, int n) {
    int s = 0, i;

    for(i = 0; i < n; i++) {
        s = s + *(p + i);
    }

    return s;
}

int main() {
    int a[5], i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Sum = %d", sum(a, 5));

    return 0;
}
