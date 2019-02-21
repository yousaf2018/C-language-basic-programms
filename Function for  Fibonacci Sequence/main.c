#include <stdio.h>
int FibonacciSequence(int);
void main()
{
    printf("Enter value of n for printing  Fibonacci Sequence\n");
    int n;
    scanf("%d",&n);
     FibonacciSequence(n);
}
int  FibonacciSequence(n)
{
    int a,b,c,sum,array[n];
    for(c=0;c<n;c++)
    {
        array[c]=0;
    }
    array[0]=0;
    array[1]=1;
    for(a=2;a<n+2;a++)
    {
        array[a]=array[a-1]+array[a-2];
    }
        for(c=0;c<n;c++)
    {
     printf(" %d",array[c]);
    }

}
