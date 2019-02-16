 #include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter size of array you want\n");
    int h;
    scanf("%d",&h);
 char Array[h],a;
  for(a=0;a<h;a++)
  {
    printf("Enter characters to store in array\n");
    scanf(" %c",&Array[a]);
  }
 for(a=0;a<h;a++)
{
    if(Array[a]>=97){
    Array[a]=Array[a]-32;

}
else if(Array[a]<97)
{
    Array[a]=Array[a]+32;
}


 }
 for(a=0;a<h;a++)
 {
     printf("Yours changed case of input letters are that:-  %c\n",Array[a]);
 }



     return 0;
}
