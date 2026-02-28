#include <stdio.h>
int main()
{
    int side1, side2;
    printf("Enter two sides: ");
    scanf("%d %d", &side1, &side2);

    if(side1 == side2)
        printf("Square\n");
    else
        printf("Rectangle\n");

    return 0;
}
