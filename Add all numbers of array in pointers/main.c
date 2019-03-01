#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5]={1,2,3,4,5};
    int a,sum=0;
    for(a=0;a<5;a++)
    {
        printf("%d\n",*(array+a));
    }

    return 0;
}


