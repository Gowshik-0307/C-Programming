#include <stdio.h>

int main()
{
    int speed;
    scanf("%d",&speed);

    if(speed<=60) 
      printf("No fine");
    else if(speed<=80) 
      printf("Fine=500");
    else if(speed<=100) 
      printf("Fine=1000");
    else 
      printf("License suspended");
}
