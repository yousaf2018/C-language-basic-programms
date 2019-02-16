#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vowels=0,consonant=0;
    int a,b;
printf("Enter the size of array you want\n");
scanf(" %d",&a);
char Array[a];
for(b=0;b<a;b++)
{
    printf("Enter the charcter you want to store in array\n");
    scanf(" %c",&Array[b]);
}
for(b=0;b<=a;b++)
{
    if(Array[b]=='a'||Array[b]=='e'||Array[b]=='i'||Array[b]=='o'||Array[b]=='u'||Array[b]=='A'||Array[b]=='E'||Array[b]=='O'||Array[b]=='I'||Array[b]=='U')
    {
        vowels=vowels+1;
    }
 }
printf("Total vowels are:-  %d\n",vowels);
printf("Total consonant are:-  %d\n",a-vowels);



    return 0;
}
