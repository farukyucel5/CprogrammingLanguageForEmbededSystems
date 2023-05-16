#include <stdio.h>

void evaluate(int);
int gimmeAreasonableResult(int,int);
int main(void) {
    int input;

    printf("Please enter a number: ");
    if (scanf("%d", &input) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    evaluate(input);
    int number=gimmeAreasonableResult(4,68);
    printf("The result: %d ",number);

    return 0;
}

void evaluate(int input) {
    if (input > 10)
        printf("The input entered is greater than 10\n");
    else if (input == 10)
        printf("The input entered is equal to 10\n");
    else
        printf("The input entered is less than 10\n");
}

int gimmeAreasonableResult(int num1,int num2){

  return(num1*num2);
}

