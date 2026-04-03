//define a structure distance to store distancr in kilometer,meter&centimeter.create an array of distance type to store 5 distance variables.find the longest distance using pointer//
#include <stdio.h>

struct distance {
    int km, m, cm;
};

int main()
 {
 	int i;
    struct distance d[5], *ptr = d, *max = d;

    for ( i = 0; i < 5; i++) {
        printf("Dist %d (km m cm): ", i + 1);
        scanf("%d %d %d", &ptr[i].km, &ptr[i].m, &ptr[i].cm);
    }

    for (i = 1; i < 5; i++)
	 {
        if (ptr[i].km > max->km) 
		{
            max = &ptr[i];
        } 
        else if (ptr[i].km == max->km && ptr[i].m > max->m)
		 {
            max = &ptr[i];
        } 
        else if (ptr[i].km == max->km && ptr[i].m == max->m && ptr[i].cm > max->cm)
		 {
            max = &ptr[i];
        }
    }

    printf("\nLongest: %dkm %dm %dcm\n", max->km, max->m, max->cm);
    return 0;
}



