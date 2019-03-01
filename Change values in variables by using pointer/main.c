#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=4;
    int *ptr_of_a;
    ptr_of_a=&a;
    *(ptr_of_a)=50;
    printf("Value of pointer::%d Change in value of a::%d",*(ptr_of_a),a);
    return 0;
}
