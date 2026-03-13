//Can a union contain a bit-field? Demonstrate with an example.//
#include <stdio.h>

union Data {
    struct {
        unsigned int a : 3;
        unsigned int b : 5;
    } bits;
    unsigned int value;
};

int main() 
{
    union Data d;

    d.value = 0;

    d.bits.a = 5;
    d.bits.b = 10;

    printf("a = %u\n", d.bits.a);
    printf("b = %u\n", d.bits.b);
    printf("value = %u\n", d.value);

    return 0;
}
