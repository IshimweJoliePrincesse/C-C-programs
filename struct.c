#include <stdio.h>
#include <stdlib.h>

struct animal {
    int age;
    char name[50];
    char gender[10];
    char place[50];
} dog, cow;

void getValues() {
    printf("Enter the details for dog:\n");

    printf("Enter age: ");
    scanf("%d", &dog.age);
    printf("Enter name: ");
    scanf("%s", dog.name);
    printf("Enter gender: ");
    scanf("%s", dog.gender);
    printf("Enter place: ");
    scanf("%s", dog.place);

    printf("\nEnter the details for cow:\n");

    printf("Enter age: ");
    scanf("%d", &cow.age);
    printf("Enter name: ");
    scanf("%s", &cow.name);
    printf("Enter gender: ");
    scanf("%s", &cow.gender);
    printf("Enter place: ");
    scanf("%s", &cow.place);

    printf("\n");
}

void outputValues() {
    printf("Details for dog:\n");
    printf("Age: %d\n", dog.age);
    printf("Name: %s\n", dog.name);
    printf("Gender: %s\n", dog.gender);
    printf("Place: %s\n", dog.place);

    printf("\nDetails for cow:\n");
    printf("Age: %d\n", cow.age);
    printf("Name: %s\n", cow.name);
    printf("Gender: %s\n", cow.gender);
    printf("Place: %s\n", cow.place);

    printf("\n");
}

int main() {
    getValues();
    outputValues();
    return 0;
}
