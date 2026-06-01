#include <stdio.h>

int main() {
    int choice, again;
    float num1, num2, result;

    do {
        // Input numbers
        printf("\nEnter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        // Menu
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Switch case
        switch(choice) {

            case 1:
                result = num1 + num2;
                printf("Addition = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Subtraction = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Multiplication = %.2f\n", result);
                break;

            case 4:
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Division = %.2f\n", result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("Modulus = %d\n", (int)num1 % (int)num2);
                break;

            default:
                printf("Invalid Choice!\n");
        }

        // Ask user to continue
        printf("\nDo you want to perform another operation?\n");
        printf("Press 1 for YES or 0 for NO: ");
        scanf("%d", &again);

    } while(again == 1);

    printf("\nCalculator Closed.\n");

    return 0;
}