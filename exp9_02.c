//2. Write a program to reverse a string using call by reference.//
#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int i, len = strlen(str);
    char temp;

    for(i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    reverse(str);

    printf("Reversed string: %s", str);
    return 0;
} 

