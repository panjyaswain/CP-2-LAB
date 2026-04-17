//Design a program that checks if the number of command-line arguments meets specific criteria (e.g., minimum number of arguments).//
#include <stdio.h>

int main(int argc, char *argv[]) {

    if(argc < 3) {
        printf("Error: Minimum 2 arguments required.\n");
    } else {
        printf("Sufficient arguments provided.\n");
    }

    return 0;
}