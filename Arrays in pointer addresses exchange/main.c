#include <stdio.h>
#include <stdlib.h>
void passarray(int *var1,int size)
{
    int a;
    for(a=0;a<size;a++)
    {
        *(var1+a)=*(var1+a)+1;

    }
}
void main()
{
    int array[]={1,2,3,4,5};
    passarray(array,5);
    int a;
    for(a=0;a<5;a++)
    {
        printf("%d",array[a]);
    }

}
