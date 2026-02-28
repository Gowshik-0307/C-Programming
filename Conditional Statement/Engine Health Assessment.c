#include <stdio.h>
int main() {
    float temp, pressure, rpm;
    printf("Enter temperature (°C): ");
    scanf("%f", &temp);
    printf("Enter oil pressure (PSI): ");
    scanf("%f", &pressure);
    printf("Enter RPM: ");
    scanf("%f", &rpm);

    if(temp > 75 || pressure < 12 || rpm > 7000)
        printf("Engine health: Poor\n");
    else if(temp > 50 || pressure < 12 || rpm > 4000)
        printf("Engine health: Fair\n");
    else
        printf("Engine health: Good\n");

    return 0;
}
