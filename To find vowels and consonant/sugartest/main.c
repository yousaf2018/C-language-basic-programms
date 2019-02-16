#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c,d,e;
 printf("Enter o if you have fast otherwise enter 1\n");
 scanf("%d",&a);
 if(a==0){

 printf("Enter value of sugar level\n");
 scanf("%d",&b);
 if((b>=70)&&(b<=100)){
 printf("Its normal");
 }
 else if((b>=101)&&(b<=125)){
 printf("Its a pre diabetic");
 }
 else if(b>125){
 printf("Diabetics");
 }

 }
 else if(a==1){



 printf("Enter value of sugar level\n");
 scanf("%d",&c);
 if(c<140){
 printf("Its normal");
 }
 else if((c>140)&&(c<=200)){
 printf("Its a pre diabetic");
 }
 else if(c>200){
 printf("Diabetics");
 }
 }

     return 0;
}
