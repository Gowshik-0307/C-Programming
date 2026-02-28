#include <stdio.h>
int main() 
{
    int age;
    float price;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 0) 
    {
        printf("Invalid age!\n");
        return 0;
    }

    if(age <= 12)
      price = 100;
    else if(age >= 13 && age <= 18) 
      price = 150;
    else if(age >= 19 && age <= 60)
      price = 200;
    else 
      price = 120;         

    printf("Ticket Price: Rs. %.2f\n", price);
    return 0;
}
