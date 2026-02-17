#include <stdio.h>

int main() {
    int age;
    float tuition, expenses;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter annual tuition fee: ");
    scanf("%f", &tuition);

    printf("Enter total annual expenses: ");
    scanf("%f", &expenses);

    if (age >= 18 && age <= 25) {
        if (tuition > expenses)
            printf("Tuition fee is higher than total expenses");
        else if (tuition < expenses)
            printf("Total expenses are higher than tuition fee");
        else
            printf("Tuition fee and expenses are equal");
    } else {
        printf("Age not in eligible range (18-25)");
    }

    return 0;
}
