#include <stdio.h>
int main() 
{
    float gpa;
    int extra, tech;
    printf("Enter GPA: ");
    scanf("%f", &gpa);
    printf("Enter extracurricular count: ");
    scanf("%d", &extra);
    printf("Enter technical activity count: ");
    scanf("%d", &tech);

    if (gpa >= 3.5 && extra >= 3 && tech >= 2)
        printf("Eligible for Scholarship");
    else
        printf("Not Eligible for Scholarship");

    return 0;
}
