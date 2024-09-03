#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber, result;

    // Display options
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Get input from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Perform the calculation
    switch(operator) {
        case '+':
            result = firstNumber + secondNumber;
            printf("%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '-':
            result = firstNumber - secondNumber;
            printf("%.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '*':
            result = firstNumber * secondNumber;
            printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            break;
        case '/':
            if(secondNumber != 0) {
                result = firstNumber / secondNumber;
                printf("%.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct\n");
            break;
    }

    return 0;
}
