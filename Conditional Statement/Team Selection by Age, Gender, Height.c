#include <stdio.h>
int main() 
{
    int age;
    float height;
    char gender;
    printf("Enter age, gender (M/F), and height (m): ");
    scanf("%d %c %f", &age, &gender, &height);

    if(height >= 1.80 || (gender == 'M' && age >= 18))
        printf("Selected for team\n");
    else
        printf("Not selected\n");

    return 0;
}
