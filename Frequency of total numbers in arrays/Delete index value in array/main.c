#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of array you want\n");
    int a;
    scanf("%d",&a);
    int Array[a],b,c;
    for(b=0;b<a;b++)
    {
        printf("Enter the numbers you want to store in your array\n");
        scanf("%d",&Array[b]);
    }
    printf("Please enter the index position from 0 to arraysize for deletion\n");
    scanf("%d",&c);

    for(b=0;b<a;b++)
    {
        if(b==c)
        {
            Array[b]=0;
        }
    }
    for(b=0;b<a;b++)
    {
        printf("%d\n",Array[b]);
    }


    return 0;
}
