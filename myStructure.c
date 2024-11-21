#include <stdio.h>

struct Car {
    int numOfSeats;
    float price;
}
 Toyota, Benz;


int main() {
    // Toyota attributes' values
    Toyota.numOfSeats = 5;
    Toyota.price = 15.5;

    // Benz attributes' values
    Benz.numOfSeats = 5;
    Benz.price = 25.5;

    printf("Toyota attributes' values\n ______________\n");
    printf("Number of seats: %d\n", Toyota.numOfSeats);
    printf("Price: %f\n", Toyota.price);

    printf("\nBenz attributes' values\n ______________\n");
    printf("Number of seats: %d\n", Benz.numOfSeats);
    printf("Price: %f\n", Benz.price);

    return 0;
}
