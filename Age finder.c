#include <stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h,k,l,m,n,o,p,q,r;

for(r=1;r>0;r++)
{
  printf("Enter date of birth date like date month year as 1 12 2000\n");
  scanf("%d %d %d",&a,&b,&c );
  printf("Enter date of death date like date month year as 1 12 2018\n");
  scanf("%d %d %d",&d,&e,&f );

if((a>=1)&&(a<=31)&&(b>=1)&&(b<=12)&&(d>=1)&&(d<=31)&&(e>=1)&&(e<=12)&&(c>=1857)&&(c<=2019))
{
break;
}
printf("Invalid inputs please enter date , month and year again\n");
}


  g=f-c;
  if(g>1){
    g=f-c-1;
  }
  if(b==1){
    a=31-a;
  }
  else if(b==2){
    a=28-a;
  }
  else if(b==3){
    a=31-a;
  }
  else if(b==4){
    a=30-a;
  }
  else if(b==5){
    a=31-a;
  }
  else if(b==6){
    a=30-a;
  }
  else if(b==7){
    a=31-a;
  }
  else if(b==8){
    a=31-a;
  }
  else if(b==9){
    a=30-a;
  }
  else if(b==10){
    a=31-a;
  }
  else if(b==11){
    a=30-a;
  }
  else if(b==12){
    a=31-a;
  }

p=a+d;
if(p>=31){
  p=p-31;
}
if(p>=30){
  p=p-30;
}

if(p>=28){
  p=p-28;
}

b=12-b;
q=b+e;
if(q>=12)
{
  q=q-12;
}

  printf("Days %d Months: %d Years: %d\n",p,q,g);
  return 0;
}
