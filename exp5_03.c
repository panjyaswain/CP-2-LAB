//Create a program to illustrate the use of pointers with character variables. Include both reading and printing the character via the pointer.//
#include<stdio.h>

int main()
{
    char ch;
    char *p;

    p = &ch;

    printf("Enter character: ");
    scanf("%c", p);

    printf("Character = %c", *p);

    return 0;
}
