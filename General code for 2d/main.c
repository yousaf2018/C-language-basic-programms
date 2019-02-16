#include <stdio.h>


int main()
{
    int array[12][50];
    int a,b;
    for(a=0;a<12;a++)
    {
        for(b=0;b<50;b++)
        {
            array[a][b]=b+1;
        }

    }
        for(a=0;a<12;a++)
    {
        for(b=0;b<50;b++)
        {
         printf("%d",array[a][b]);
        }
        printf("\n");


    }

    return 0;
}
