#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,d,e;
 printf("Enter the size of array you want\n");
 scanf("%d",&a);
 int Array[a],freq[a],counter;


for(b=0;b<a;b++)
 {
     printf("Enter the numbers in your array one by one for to store it\n");
     scanf("%d",&Array[b]);
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
 for(b=0;b<a;b++)
 {
    if(Array[b]==-1&&freq[b]==0)
    {
        continue;
    }

    else

    {
        printf("Your number in arary:- %d  has frequency:- %d\n",Array[b],freq[b]+1);
    }
 }


 return 0;
}
