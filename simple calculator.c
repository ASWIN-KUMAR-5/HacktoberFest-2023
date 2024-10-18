#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function prototypes
void displayMenu();
void performOperation(int choice);

int main() {
    int choice;

    do {
        displayMenu();
        printf("Enter your choice (1-9, 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        } else if (choice >= 1 && choice <= 9) {
            performOperation(choice);
        } else {
            printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}

void displayMenu() {
    printf("\n*** Advanced Calculator ***\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Square Root\n");
    printf("7. Sine\n");
    printf("8. Cosine\n");
    printf("9. Tangent\n");
    printf("0. Exit\n");
}

void performOperation(int choice) {
    double num1, num2, result;

    switch (choice) {
        case 1:
            printf("Enter two numbers for addition: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers for subtraction: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers for multiplication: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers for division: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter base and exponent (x^y): ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number to find the square root: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Error! Cannot compute square root of a negative number.\n");
            } else {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            }
            break;

        case 7:
            printf("Enter an angle (in degrees) to find the sine: ");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180); // Convert to radians
            printf("Result: %.2lf\n", result);
            break;

        case 8:
            printf("Enter an angle (in degrees) to find the cosine: ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180); // Convert to radians
            printf("Result: %.2lf\n", result);
            break;

        case 9:
            printf("Enter an angle (in degrees) to find the tangent: ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180); // Convert to radians
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }
}
