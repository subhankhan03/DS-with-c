#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    // Ask user for input
    printf("Enter your name: ");
    scanf("%49s", name); // %49s to avoid buffer overflow

    printf("Enter your age: ");
    scanf("%d", &age); // %d for integers

    printf("Enter your height in meters: ");
    scanf("%f", &height); // %f for float

    // Print the input
    printf("\nHello %s!\n", name);
    printf("You are %d years old and %.2f meters tall.\n", age, height);

    return 0;
}
