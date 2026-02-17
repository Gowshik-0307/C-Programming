#include <stdio.h>

int main() {
    int steps, time;

    printf("Enter steps taken: ");
    scanf("%d", &steps);

    printf("Enter time taken (minutes): ");
    scanf("%d", &time);

    if (steps >= 10000 && time <= 60)
        printf("Excellent Fitness");
    else if (steps >= 7000)
        printf("Good Fitness");
    else if (steps >= 4000)
        printf("Average Fitness");
    else
        printf("Poor Fitness");

    return 0;
}
