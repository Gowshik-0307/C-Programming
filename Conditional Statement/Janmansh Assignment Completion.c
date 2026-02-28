#include <stdio.h>
int main() 
{
    int start;
    printf("Enter starting hour (0-23): ");
    scanf("%d", &start);

    if (start <= 18)
        printf("YES, can complete all assignments");
    else
        printf("NO, cannot complete on time");

    return 0;
}
