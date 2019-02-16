#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[4][4];
    int array2[4][4];
int h,e,d,a,f;
for(a=0;a<4;a++)
{

    for(d=0;d<4;d++)
    {
    array[a][d]=0;
    array2[a][d]=0;
    }

}
printf("Enter values one by one to store in 2d array 4*4\n");
for(a=0;a<4;a++)
{

    for(d=0;d<4;d++)
    {
    scanf("%d",&array[a][d]);
    }

}



    h=3;
    e=0;

for(a=0;a<4;a++)
{
    for(d=0;d<4;d++)
    {
        f=0;
        array2[d][h]=array[e][d];
        f++;
    }
    h--;
    e++;
}


for(a=0;a<4;a++)
{

    for(d=0;d<4;d++)
    {
    printf(" %d",array2[a][d]);
    }
printf("\n");
}

    return 0;
}
