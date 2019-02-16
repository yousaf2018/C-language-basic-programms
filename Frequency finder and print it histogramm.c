#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,d,e;
 printf("Enter the size of array you want\n");
 scanf("%d",&a);
 int Array[a],freq[a],counter,hist;


for(b=0;b<a;b++)
 {
     printf("Enter values from 1 to 10 to store in your array\n");
     scanf("%d",&Array[b]);
     if(Array[b]>10)
     {
         b=b-1;

     }
     freq[b]=0;

 }

 for(b=0;b<a;b++)
 {
     counter=0;
     for(d=b+1;d<a;d++)
     {

         if(Array[d]==-1)
         {
             continue;
         }

       else  if(Array[b]==Array[d])
         {
             Array[d]=-1;
            counter=counter+1;
         }
     }
     freq[b]=counter;

 }
 printf("Value          Frequency          Histogram\n");

 for(b=0;b<a;b++)
 {
    if(Array[b]==-1&&freq[b]==0)
    {
        continue;
    }

    else

    {
        printf(" %d               %d",Array[b],freq[b]+1);
        hist=freq[b]+1;
        printf("                  ");
    for(e=1;e<=hist;e++)
    {
        printf("*");
    }
    printf("\n");
    }
 }


 return 0;
}
