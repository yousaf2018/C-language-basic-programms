#include <stdio.h>
#include <stdlib.h>

int main()
{
 char Array[3000],character;
 int freq[3000],counter,d,b,n,max=0,frequency;
printf("Enter line of words and use full stop to end it\n");
for(b=0;b>=0;b++)
 {

     scanf(" %c",&Array[b]);

     if(Array[b]=='.')
     {
        freq[b]=0;
         n=b;

        break;
     }
     else if(Array[b]>=97)
     {
         Array[b]=Array[b]-32;
     }
 }
 for(b=0;b<n;b++)
 {
     counter=0;
     for(d=b+1;d<n;d++)
     {

         if(Array[d]=='1')
         {
             continue;
         }

       else  if(Array[b]==Array[d])
         {
             Array[d]='1';
            counter=counter+1;
         }
     }
     freq[b]=counter;
     if(max<freq[b])
     {
         max=freq[b];
         character=Array[b];
     }

 }
        if(max!=0){
        printf("Your character in array:- %c  has frequency:- %d\n",character,max+1);
                  }
          else if(max==0)
          {
              printf("There is no maximum all characters have same frequency\n");
          }






 return 0;
}
