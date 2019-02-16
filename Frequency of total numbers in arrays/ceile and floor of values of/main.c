#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Enter decimal that you want to convert it floor and ceiled");
    scanf("%f",&a);
    printf("Ceiled value of given value: %f\n",ceil(a));
    printf("Floor value of given value: %f\n",floor(a));
    return 0;
}
