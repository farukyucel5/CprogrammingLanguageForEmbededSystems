#include <stdio.h>

int main() {
    int operation;
    printf("What operation would you like to make?\n");
    printf("1. Summation\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &operation);

    float num1, num2, result;
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);

    switch (operation) {
        case 1:
            result = num1 + num2;
            printf("%f + %f = %f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%f - %f = %f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%f * %f = %f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("%f / %f = %f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}

