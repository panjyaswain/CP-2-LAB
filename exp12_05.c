//Write a program that accepts a string as a command-line argument and converts it to uppercase.//
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int i = 0;

    if(argc < 2) {
        printf("No string provided.\n");
        return 1;
    }

    while(argv[1][i] != '\0') {
        printf("%c", toupper(argv[1][i]));
        i++;
    }

    return 0;
}