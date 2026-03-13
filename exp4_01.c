//Demonstrate: How do you declare a bit-field to store a value that ranges from 0 to 15?//
#include <stdio.h>

struct Data {
    unsigned int value : 4;   // 4-bit field (0–15)
};

int main() {
    struct Data d;

    d.value = 10;   // storing a value within range

    printf("Stored value: %u", d.value);

    return 0;
}
