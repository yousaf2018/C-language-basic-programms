#include <stdio.h>
#include <string.h>
#define Number_accounts  2
char names[Number_accounts][20];
char idcard[Number_accounts][20];
int firstdeposit[Number_accounts];
int pincodes[Number_accounts];
int acc_counter=0;
int main()
{
    char nam[20];
    char id[20];
    int dep;
    int pin;
    int h;
    int acc;
    int money;
    do
    {
      int a;
    printf("Enter 1 for opening account\n");
    printf("Enter 2 for deposit money\n");
    printf("Enter 3 for check balance money\n");
    printf("Enter 4 for cash withdrawal\n");
    scanf("%d",&a);
    if(a==1)
             {
        printf("Enter your name\n");
        scanf("%s", nam);
        printf("Enter your idcard number\n");
        scanf("%s", id);
        printf("Enter your pincode for security\n");
        scanf("%d",&pin);
        printf("Enter your firstdeposit\n");
        scanf("%d",&dep);
        int details;
        details=openaccount(nam,id,pin,dep);
        printf("Congratulation your account number is: %d\n",details);
              }
     else if(a==2)
             {
        printf("Enter your pincode for security\n");
        scanf("%d",&pin);
        printf("Enter your account number\n");
        scanf("%d",&acc);
        printf("Enter money you want to be deposit\n");
        scanf("%d",&money);
        int updated;
        updated=deposit(pin,acc,money);
        if(updated!=-1)
             {
        printf("Your updated balance is: \n");
        printf("%d\n",updated);
             }
        else
             {
        printf("Sorry wrong inputs\n");
             }
             }
    printf("Enter 00 for more transactions\n");

    scanf("%d",&h);

    }
    while(h==00);
  return 0;
}
int openaccount(char nam[20],char id[20],int pin,int dep)
{
    strcpy(names[acc_counter],nam);
    strcpy(idcard[acc_counter],id);
    firstdeposit[acc_counter]=dep;
    pincodes[acc_counter]=pin;
    acc_counter++;
    return(acc_counter-1);
}
int deposit(int pin,int acc,int money)
{
   if(acc>Number_accounts)
   {
       printf("Sorry your account does not exists\n");
       return -1;
   }
   else if(pin!=pincodes[acc])
   {
       printf("Sorry your pin code is invalid\n");
       return -1;
   }
   else
   {
       firstdeposit[acc]=firstdeposit[acc]+money;
       int total;
       total=firstdeposit[acc];
       return(total);
   }
}
