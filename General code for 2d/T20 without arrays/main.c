
#include <stdlib.h>
#include <time.h>
int main()
{
int fakhar=0,imam=0,babar=0,sarfraz=0,hafeez=0,shoaib=0,imad=0,shadab=0,hassan=0,amir=0,shinwari=0;
int rohit=0,buttler=0,AB=0,kholi=0,malan=0,jadeja=0,johnsan=0,starc=0,badri=0,malinga=0,tahir=0;
int toss,coin,a,b,c,d,e,f,g,h,i,k,l,Total=0,Total2=0,final,final2;
int balls1=0,balls2=0,balls3=0,balls4=0,balls5=0,balls6=0,balls7=0,balls8=0,balls9=0,balls10=0,balls11=0;
int alls11=0,alls22=0,alls33=0,alls44=0,alls55=0,alls66=0,alls77=0,alls88=0,alls99=0,alls100=0,alls111=0;
printf("Enter 1 for head or 0 for tail to win toss for match\n");
scanf("%d",&toss);
srand(time(0));
for(a=1;a<=1;a++){
coin=rand()%2;
printf("%d\n",coin);
}
if(coin==toss){
start1:
for(a=1;a<=120;a++){
b=rand()%6;
fakhar=fakhar+b;
if(b==0){

 balls1=a+1;
break;
}
}
for(;a<=120;a++){
b=rand()%6;
imam=imam+b;
if(b==0){
    balls2=a-balls1+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
babar=babar+b;
if(b==0){
balls3=a-balls2-balls1+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
sarfraz=sarfraz+b;
if(b==0){
    balls4=a-balls1-balls2-balls3+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
hafeez=hafeez+b;
if(b==0){
    balls5=a-balls1-balls2-balls3-balls4+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
shoaib=shoaib+b;
if(b==0){
    balls6=a-balls1-balls2-balls3-balls4-balls5+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
imad=imad+b;
if(b==0){
    balls7=a-balls1-balls2-balls3-balls4-balls5-balls6+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
shadab=shadab+b;
if(b==0){
    balls8=a-balls1-balls2-balls3-balls4-balls5-balls6-balls7+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
hassan=hassan+b;
if(b==0){
    balls9=a-balls1-balls2-balls3-balls4-balls5-balls6-balls7-balls8+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
amir=amir+b;
if(b==0){
    balls10=a-balls1-balls2-balls3-balls4-balls5-balls6-balls7-balls8-balls9+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
shinwari=shinwari+b;
if(b==0){
    balls11=a-balls1-balls2-balls3-balls4-balls5-balls6-balls7-balls8-balls9-balls10;
break;
}
}

printf("Scoreboard of your team\n");
printf("fakhar score:: %d     Played balls:: %d\n",fakhar,balls1+1);
printf("imam score:: %d     Played balls:: %d\n",imam,balls2+1);
printf("babar score:: %d     Played balls:: %d\n",babar,balls3+1);
printf("(captain)sarfraz(wk) score:: %d     Played balls:: %d\n",sarfraz,balls4+1);
printf("hafeez score:: %d     Played balls:: %d\n",hafeez,balls5+1);
printf("shoaib score:: %d     Played balls:: %d\n",shoaib,balls6+1);
printf("imad score:: %d     Played balls:: %d\n",imad,balls7+1);
printf("shadab score:: %d     Played balls:: %d\n",shadab,balls8+1);
printf("hassan score:: %d     Played balls:: %d\n",hassan,balls9+1);
printf("amir score:: %d     Played balls:: %d\n",amir,balls10+1);
printf("shinwari score:: %d     Played balls:: %d\n",shinwari,balls11+1);
Total=fakhar+imam+babar+sarfraz+hafeez+shoaib+imad+shadab+hassan+amir+shinwari;

printf("Total score of your team:: %d\n",Total);
if(Total2==0){
goto start;
}
}

else
{


start:
for(a=1;a<=120;a++){
b=rand()%6;
rohit=rohit+b;
if(b==0){
    alls11=a+1;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
buttler=buttler+b;
if(b==0){
alls22=a-alls11;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
AB=AB+b;
if(b==0){
    alls33=a-alls11-alls22;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
kholi=kholi+b;
if(b==0){
    alls44=a-alls11-alls22-alls33;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
malan=malan+b;
if(b==0){
    alls55=a-alls11-alls22-alls33-alls44;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
jadeja=jadeja+b;
if(b==0){
    alls66=a-alls11-alls22-alls33-alls44-alls55;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
johnsan=johnsan+b;
if(b==0){
    alls77=a-alls11-alls22-alls33-alls44-alls55-alls66;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
starc=starc+b;
if(b==0){
    alls88=a-alls11-alls22-alls33-alls44-alls55-alls66-alls77;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
badri=badri+b;
if(b==0){
    alls99=a-alls11-alls22-alls33-alls44-alls55-alls66-alls77-alls88;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
malinga=malinga+b;
if(b==0){
    alls100=a-alls11-alls22-alls33-alls44-alls55-alls66-alls77-alls88-alls99;
break;
}
}

for(;a<=120;a++){
b=rand()%6;
tahir=tahir+b;
if(b==0){
    alls111=a-alls11-alls22-alls33-alls44-alls55-alls66-alls77-alls88-alls99-alls100;
break;
}
}

printf("Scoreboard of opponent team\n");
printf("rohit score:: %d     Played balls:: %d\n",rohit,alls11+1);
printf("buttler score(wk):: %d     Played balls:: %d\n",buttler,alls22+1);
printf("AB Score:: %d     Played balls:: %d\n",AB,alls33+1);
printf("(Captain)kholi score:: %d     Played balls:: %d\n",kholi,alls44+1);
printf("malan score:: %d     Played balls:: %d\n",malan,alls55+1);
printf("jadeja score:: %d     Played balls:: %d\n",jadeja,alls66+1);
printf("johnsan score:: %d     Played balls:: %d\n",johnsan,alls77+1);
printf("starc score:: %d     Played balls:: %d\n",starc,alls88+1);
printf("badri score:: %d     Played balls:: %d\n",badri,alls99+1);
printf("malinga score:: %d     Played balls:: %d\n",malinga,alls100+1);
printf("tahir score:: %d     Played balls:: %d\n",tahir,alls111+1);
Total2=rohit+buttler+AB+kholi+malan+jadeja+johnsan+starc+badri+malinga+tahir;


printf("Total score of opponent team:: %d\n",Total2);

if(Total==0){
goto start1;
}
}

if(Total>Total2){

printf("Congratulation your teams finally won the mathch by runs:: %d",Total-Total2);

}

else
{

    printf("Ohh you loss the match by runs:: %d",Total2-Total);

}

     return 0;
}
