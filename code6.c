#include <stdio.h>

int main() {
    /* 
    float num1, num2, result;
    int choice;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Displaying menu
    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Performing operation based on user choice
    if (choice == 1) {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 2) {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 3) {
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 4) {
        if (num2 != 0)
            result = num1 / num2, printf("Result = %.2f\n", result);
        else
            printf("Error: Division by zero is not allowed!\n");
    }
    else {
        printf("Invalid choice! Please enter 1 to 4.\n");
    }*/
    float a, b, c;

    // Taking input from user
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides can form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {

        // Check for Equilateral triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }

        // Check for Isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }

        // Check for Scalene triangle
        else {
            printf("The triangle is Scalene.\n");
        }

        // Check for Right-angled triangle (using Pythagoras theorem)
        if ((a * a == b * b + c * c) ||(b * b == a * a + c * c) ||(c * c == a * a + b * b)) {
            printf("The triangle is also Right-angled.\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

