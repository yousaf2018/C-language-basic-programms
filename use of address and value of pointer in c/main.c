#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=44;
    int *ptr_of_a;
    ptr_of_a=&a;
    printf("Stored address::%u Value stored in pointers::%d",ptr_of_a,*(ptr_of_a));
    return 0;
}
