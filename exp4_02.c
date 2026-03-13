//Write a program to use enumeration to represent days of the week.//
#include <stdio.h>

enum Week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() 
{
    enum Week day;

    day = Wednesday;

    printf("Day number of Wednesday is: %d", day);

    return 0;
}
