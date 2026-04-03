
//write a program to create a structure name complex and define a function incrcomplex() to increment the value of both real and imaginary members by 1//
#include<stdio.h>
#include <stdio.h>
struct complex {
    float real;
    float imag;
};
void incrcomplex(struct complex *c) {
    c->real += 1.0;
    c->imag += 1.0;
}

int main() {
    struct complex num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imag);
    incrcomplex(&num);
  printf("Real: %.1f, Imag: %.1f\n", num.real, num.imag);
    return 0;
}

