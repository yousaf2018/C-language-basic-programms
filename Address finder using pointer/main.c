#include <stdio.h>
#include <stdlib.h>

int main()
{

int a=100;
double b=100.2;
char c='B';
int *ptra;
double *ptrb;
char *ptrc;
ptra=&a;
ptrb=&b;
ptrc=&c;
printf("Address of your stored value:%u Stored value:%d\n",ptra,*ptra);
printf("Address of your stored value:%u Stored value:%lf\n",ptrb,*ptrb);
printf("Address of your stored value:%u Stored value: %c",ptrc,*ptrc);
}
