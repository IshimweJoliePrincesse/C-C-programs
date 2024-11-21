#include <stdio.h>
#include <stdlib.h>

// Define the Person structure
struct Person {
    char name[50];
    int citNo;
    float salary;
};

int main() {
    // Declare variables of type Person
    struct Person person0, person1, person2, Peter, Moses, Nina, Rwema;
    struct Person persons[20]; // Declare an array of Persons

    printf(sizeof(Person)); // Print the size of the struct Person

    return 0;
}
