#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 0)
    {
        printf("Invalid age!\n");
    } 
    else if(age <= 5) 
    {
        printf("Suggested food: Mashed vegetables or soft fruits\n");
    }
    else if(age >= 13 && age <= 18) 
    {
        printf("Suggested food: Burgers or Pasta\n");
    } 
    else if(age >= 51) 
    {
        printf("Suggested food: Soup or Grilled fish\n");
    } else 
    {
        printf("Suggested food: Balanced diet (rice, vegetables, protein)\n");
    }
    return 0;
}
