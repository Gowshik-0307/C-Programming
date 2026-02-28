#include <stdio.h>

int main() {
    int symptoms;
    scanf("%d", &symptoms);
    printf("Enter number of symptoms: ");
    if (symptoms != 1 || symptoms < 0)
    {
        printf("Invalid input");
        return 0;
    }

    if (symptoms >= 5)
        printf("Critical - High Priority");
    else if (symptoms >= 3)
        printf("Moderate - Medium Priority");
    else
        printf("Stable - Low Priority");

    return 0;
}
