#include<stdio.h>
#include<stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    // Declare a pointer to a Point struct
    struct Point* ptr;

    // Allocate memory for a Point struct using malloc
    ptr = (struct Point*)malloc(sizeof(struct Point));

    // Assign values to the x and y coordinates
    ptr->x = 10;
    ptr->y = 20;

    // Print the coordinates
    printf("Coordinates: (%d, %d)\n", ptr->x, ptr->y);

    // Free the allocated memory
    free(ptr);

    return 0;
}
