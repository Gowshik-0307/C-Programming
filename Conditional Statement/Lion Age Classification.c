#include <stdio.h>
int main()
{
    float age;
    printf("Enter lion's age (max 26 years): ");
    scanf("%f", &age);

    if(age < 0 || age > 26)
    {
        printf("Invalid age!\n");
        return 0;
    }

    if(age <= 2)
      printf("Cub\n");
    else if(age <= 5)
      printf("Juvenile\n");
    else if(age <= 10)
      printf("Subadult\n");
    else if(age <= 18)
      printf("Young adult\n");
    else
      printf("Old adult\n");

    printf("Age entered: %.2f years\n", age);
    return 0;
}
