//3. Define a function swapDistance() for the structure defined in question no.2, to swap the content of two Distance variables. //
#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

void swapDistance(struct Distance *d1, struct Distance *d2) {
    struct Distance temp;
    temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}

int main() {
    struct Distance d1 = {5, 10};
    struct Distance d2 = {3, 6};

    printf("Before Swap:\n");
    printf("D1 = %d feet %d inch\n", d1.feet, d1.inch);
    printf("D2 = %d feet %d inch\n", d2.feet, d2.inch);

    swapDistance(&d1, &d2);

    printf("\nAfter Swap:\n");
    printf("D1 = %d feet %d inch\n", d1.feet, d1.inch);
    printf("D2 = %d feet %d inch\n", d2.feet, d2.inch);

    return 0;
}
