#include <stdio.h>
int main() 
{
    float km, fare;
    printf("Enter kilometers travelled: ");
    scanf("%f", &km);

    if (km <= 0) 
    {
        printf("Invalid distance");
    }
    else if (km <= 10)
        fare = km * 17;
    else if (km <= 100)
        fare = km * 17;
    else
        fare = km * 5;

    printf("Total Fare = %.2f", fare);
    return 0;
}
