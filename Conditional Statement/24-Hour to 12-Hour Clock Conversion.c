#include <stdio.h>
int main() {
    int hour, min;

    printf("Enter time (hour minute in 24-hr format): ");
    scanf("%d %d", &hour, &min);

    if (hour < 0 || hour > 23 || min < 0 || min > 59) {
        printf("Invalid time");
        return 0;
    }

    if (hour == 0)
        printf("12:%02d AM", min);
    else if (hour < 12)
        printf("%02d:%02d AM", hour, min);
    else if (hour == 12)
        printf("12:%02d PM", min);
    else
        printf("%02d:%02d PM", hour - 12, min);

    return 0;
}
