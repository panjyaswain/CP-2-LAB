//create a structure to store details of book. store and print the details of 5 books using pointer//
#include <stdio.h>
struct Book {
    char title[30];
    char author[30];
    float price;
};
int main()
{
	int i;
    struct Book b[5];
    struct Book *ptr;
    ptr = b; 
    for ( i = 0; i<5; i++) 
    {
    
        printf("Book %d (Name Author Price): ", i);
        scanf("%s %s %f", ptr->title, ptr->author, &ptr->price);
        ptr++; 
    }

    ptr = b; 
    printf("\nBook Details:\n");
    for ( i = 0; i < 5; i++) {
        printf("%s - %s - %.2f\n", ptr->title, ptr->author, ptr->price);
        ptr++; 
    }

    return 0;
}



