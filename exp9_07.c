//7. Create a program to remove all spaces from a string using call by reference.//
#include <stdio.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;

    while(str[i] != '\0') {
        if(str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    removeSpaces(str);

    printf("Without spaces: %s", str);
    return 0;
}
