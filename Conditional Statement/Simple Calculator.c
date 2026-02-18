#include <stdio.h>

int main() {
    int a = 10, b = 5;
    char op = '+';

    switch (op) {
        case '+':
            printf("Sum = %d", a + b);
            break;
        case '-':
            printf("Difference = %d", a - b);
            break;
        case '*':
            printf("Product = %d", a * b);
            break;
        case '/':
            printf("Quotient = %d", a / b);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
