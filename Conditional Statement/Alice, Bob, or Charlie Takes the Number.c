#include <stdio.h>
int main()
{
    int A;
    printf("Enter a number (1 to 1000): ");
    scanf("%d", &A);

    if (A < 1 || A > 1000) {
        printf("Invalid input");
    } 
    else if (A % 2 == 0 && A % 7 == 0) {
        printf("Alice takes it home");
    } 
    else if (A % 2 != 0 && A % 9 == 0) {
        printf("Bob takes it home");
    } 
    else {
        printf("Charlie takes it home");
    }

    return 0;
}
