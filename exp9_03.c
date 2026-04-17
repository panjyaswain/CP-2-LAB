//3. Create a program to convert all characters of a string to uppercase using call by reference.//
#include <stdio.h>
#include <ctype.h>

void toUpper(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    toUpper(str);

    printf("Uppercase string: %s", str);
    return 0;
}
