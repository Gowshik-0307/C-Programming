#include <stdio.h>
int main() {
    int purchaseAmount;
    printf("Enter the purchase amount: ");
    scanf("%d", &purchaseAmount);

    if (purchaseAmount >= 1000) {
        printf("You get a 10%% discount!\n");
    } else {
        printf("No discount available.\n");
    }

    return 0;
}
