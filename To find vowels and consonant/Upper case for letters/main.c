#include <stdio.h>
#include <stdlib.h>

int main()
{
 char Array[3],a;
  for(a=0;a<2;a++)
  {
    printf("Enter characters to store in array\n");
    scanf(" %c",&Array[a]);
  }
 for(a=0;a<2;a++)
{
    if(Array[a]>=97){
    Array[a]=Array[a]-32;
}
}
 for(a=0;a<2;a++)
 {
     printf("Yours uppper case letters are that  %c\n",Array[a]);
 }



     return 0;
}
