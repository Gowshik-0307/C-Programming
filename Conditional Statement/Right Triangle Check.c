#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter base, height, and ladder length: ");
    scanf("%d %d %d", &a, &b, &c);

    if(c*c == a*a + b*b)
        printf("Forms a right triangle\n");
    else
        printf("Does not form a right triangle\n");

    return 0;
}
