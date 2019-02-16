#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int a,pak[10]={0,0,0,0,0,0,0,0,0,0},total=0,coin,toss,b,pakballs[10]={0,0,0,0,0,0,0,0,0,0},fours[10]={0,0,0,0,0,0,0,0,0,0},sixes[10]={0,0,0,0,0,0,0,0,0,0};
float strike[10],strikew[10];
int world[10]={0,0,0,0,0,0,0,0,0,0},totalw=0,wballs[10]={0,0,0,0,0,0,0,0,0,0},foursw[10]={0,0,0,0,0,0,0,0,0,0},sixesw[10]={0,0,0,0,0,0,0,0,0,0};
int totalballs=0,e,g,max=0,index,maxw=0,indexw,z;
printf("Enter 1 for head or 0 for tail to win toss for match\n");
scanf("%d",&toss);
srand(time(0));
for(a=1;a<=1;a++){
coin=rand()%2;
printf("%d\n",coin);
}
if(coin==toss)
{

for(e=0;e<=9;e++)
{
for(a=1;a<=120;a++){
b=rand()%7;
 if(b==5){
     if(max<pak[e])
     {
         max=pak[e];
         index=e;
     }
pakballs[e]=a;
totalballs=totalballs+pakballs[e];

total=total+pak[e];

strike[e]=(float)pak[e]/pakballs[e]*100;
break;
}
pak[e]=pak[e]+b;

 if(b==4){
fours[e]=fours[e]+1;
}
else if(b==6){
sixes[e]=sixes[e]+1;
}
}

}
for(e=0;e<=9;e++)
{



for(a=1;a<=120;a++){
b=rand()%7;
 if(totalw>total){
     if(maxw<world[e])
     {
         maxw=world[e];
         indexw=e;

     }

wballs[e]=a;
totalballs=totalballs+wballs[e];



strikew[e]=(float)world[e]/wballs[e]*100;
z=e;
e=11;
 break;
 }
 if(b==5){
          if(maxw<world[e])
     {
         maxw=world[e];
         indexw=e;

     }

wballs[e]=a;
totalballs=totalballs+wballs[e];



strikew[e]=(float)world[e]/wballs[e]*100;
break;
}
world[e]=world[e]+b;
totalw=totalw+b;
 if(b==4){
foursw[e]=foursw[e]+1;
}
else if(b==6){
sixesw[e]=sixesw[e]+1;
}
}

}
printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<T20>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
printf("Total score of your team:- %d\n",total);
printf("Batsman number          Runs          Balls          Fours          sixes          strike rate\n");
for(a=0;a<=9;a++){
printf("%d                      %d              %d            %d             %d                  %f1\n",a+1,pak[a],pakballs[a],fours[a],sixes[a],strike[a]);
}
printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Break time>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
if(total<totalw){

printf("Total score of your opponent team:- %d\n",totalw);
}
else if(total>=totalw){
printf("Total score of your opponent team:- %d\n",totalw);
}
for(a=0;a<=9;a++){
if(wballs[a]!=0){
printf("%d                      %d              %d            %d             %d                  %f1\n",a+1,world[a],wballs[a],foursw[a],sixesw[a],strikew[a]);
}}
if(total>totalw){
    printf("Batsman %d is awarded man of match %d\n",index+1,max);
printf("Congratulation your teams finally won the mathch by runs:: %d",total-totalw);
}
else if(totalw>total){
printf("Batsman %d is awarded man of match scored runs %d\n",indexw+1,maxw);
printf("Ohh your opponent win the match by wickets %d\n",9-z);
}
else if(total==totalw){
    if(max>maxw){
printf("Batsman %d is awarded man of match scored runs %d\n",index+1,max);
    }
    else
    {
    printf("Batsman %d is awarded man of match scored runs %d\n",indexw+1,maxw);
    }
printf("Bad luck match is draw\n");

}

}


if(coin!=toss)
{

for(e=0;e<=9;e++)
{
for(a=1;a<=120;a++){
b=rand()%7;
 if(b==5){
          if(maxw<world[e])
     {
         maxw=world[e];
         indexw=e;
     }

wballs[e]=a;
totalballs=totalballs+wballs[e];

totalw=totalw+world[e];

strikew[e]=(float)world[e]/wballs[e]*100;
break;
}
world[e]=world[e]+b;

 if(b==4){
foursw[e]=foursw[e]+1;
}
else if(b==6){
sixesw[e]=sixesw[e]+1;
}
}

}
for(e=0;e<=9;e++)
{



for(a=1;a<=120;a++){
b=rand()%7;
 if(total>totalw){
     if(max<pak[e])
     {
         max=pak[e];
         index=e;

     }

pakballs[e]=a;
totalballs=totalballs+pakballs[e];



strike[e]=(float)pak[e]/pakballs[e]*100;
z=e;
e=11;
 break;
 }
 if(b==5){
          if(max<pak[e])
     {
         max=pak[e];
         index=e;

     }

pakballs[e]=a;
totalballs=totalballs+pakballs[e];



strike[e]=(float)pak[e]/pakballs[e]*100;
break;
}
pak[e]=pak[e]+b;
total=total+b;
 if(b==4){
fours[e]=fours[e]+1;
}
else if(b==6){
sixes[e]=sixes[e]+1;
}
}

}

printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<T20>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
printf("Total score of your opponent team:- %d\n",totalw);
printf("Batsman number          Runs          Balls          Fours          sixes          strike rate\n");
for(a=0;a<=9;a++){
printf("%d                      %d              %d            %d             %d                  %f1\n",a+1,world[a],wballs[a],foursw[a],sixesw[a],strikew[a]);
}
printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Break time>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
if(totalw<total){

printf("Total score of your team:- %d\n",total);
}
else if(totalw>=total){
printf("Total score of your team:- %d\n",total);
}
for(a=0;a<=9;a++){
if(pakballs[a]!=0){
printf("%d                      %d              %d            %d             %d                  %f1\n",a+1,pak[a],pakballs[a],fours[a],sixes[a],strike[a]);
}}
if(total>totalw){
printf("Batsman %d is awarded man of match %d\n",index+1,max);
printf("Congratulation your teams finally won the mathch by wickets:: %d",9-z);
}
else if(totalw>total){
printf("Batsman %d is awarded man of match scored runs %d\n",indexw+1,maxw);
printf("Ohh your opponent win the match by runs %d\n",totalw-total);
}
else if(total==totalw){
    if(max>maxw){
printf("Batsman %d is awarded man of match scored runs %d\n",index+1,max);
    }
    else
    {
    printf("Batsman %d is awarded man of match scored runs %d\n",indexw+1,maxw);
    }
printf("Bad luck match is draw\n");

}








return 0;
}}
