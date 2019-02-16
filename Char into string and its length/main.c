#include <stdio.h>
#include <stdlib.h>

int main()
{
char array[1000],ch;
int a,counter=0;
printf("Enter your line ends with full stop\n");
for(a=0;a<100;a++)
{

    scanf(" %c",&ch);
      if(ch=='.')
      {
         break;
      }
      array[a]=ch;
}
 array[a]='\0';

printf("%s\n",array);
for(a=0;a<100;a++){
    if(array[a]=='\0')
    {
        break;
    }
    counter=counter+1;
}
printf("%d",counter);
    return 0;
}
