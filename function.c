#include <stdio.h>

// Function to print the 4*4 Square
void squareOfStars() {

    //this loop initializes i to 0 and j to 0 and will continue to be executed until i or j will be greater than 4.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print the 4*4 half square (right triangle)
void halfSquare() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print Pascal's Triangle of height 4
void pascalTriangle(int h) {
    int arr[26][10];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            if (i >= j) {
                if (i == j || j == 0) {
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
                }
                printf("   %d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("Enter your choice:\n\n");
        printf("1. Print 4*4 square of stars\n\n");
        printf("2. Print 4*4 half square (right triangle) of stars\n\n");
        printf("3. Print Pascal's triangle of height 4\n\n");
        printf("0. Exit\n\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:

                squareOfStars();//here the function squareOfStars is being called once the user chooses 1
                break;
            case 2:

                halfSquare();//here the function halfSquare is being called once the user chooses 2
                break;
            case 3:

                pascalTriangle(4);//here the function pascalTriangle is being called once the user chooses 3
                break;
            case 0:
                printf("Exiting program...\n\n"); // once the user chooses 0 the program exit itself
                return 0;
            default:
                printf("Invalid input, try again\n\n"); //once a user enters a value other than 1, 2 or 3 it will print invalid input
                break;
        }
    }

    return 0;
}
