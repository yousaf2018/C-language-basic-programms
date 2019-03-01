#include <stdio.h>
#include <string.h>
#define Total_Contacts 10
char names[Total_Contacts][20];
char Address[Total_Contacts][40];
char City[Total_Contacts][20];
char Gender[Total_Contacts][20];
char Contacts[Total_Contacts][20];
char emails[Total_Contacts][40];
int counter=0;

int main()
{
    char name[20];
    char add[40];
    char id2[20];
    char id3[20];
    char rol[20];
    char cit[20];
    char gend[20];
    char email[40];
    char Contact[20];
    int action;
    int action2;
    int choice;
    int choice2;
    removegarbage();
    do
    {
        printf("Enter 1 for store your contact number in details\n");
        printf("Enter 2 for change information of your contact\n");
        printf("Enter 3 for to search Conatact number in your record\n");
        printf("Enter 4 for to delete Contact details\n");
        printf("Enter 5 for search Contacts with same city\n");

        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter name\n");
            scanf("%s",name);
            printf("Enter your address\n");
            scanf("%s",add);
            printf("Enter your gender\n");
            scanf("%s",gend);
            printf("Enter your city\n");
            scanf("%s",cit);
            printf("Enter your email\n");
            scanf("%s",email);
            printf("Enter your number\n");
            scanf("%s",Contact);

            openaccount(name,add,gend,cit,email,Contact);

        }
        else if (choice==2)
        {
            printf("Enter name of your contact for to edit details\n");
            scanf("%s",id2);
            action2=change(id2);
            if(action2==-5)
            {
                printf("Congrats your contact number detail is modified\n");
            }
        }
        else if(choice==3)
        {
            printf("Enter name of your contact to see it details\n");
            scanf("%s",id2);
            search(id2);
        }
        else if(choice==4)
        {
            printf("Enter name of your contact to delete its details\n");
            scanf("%s",id3);
            deletedata(id3);
        }
        else if(choice==5)
        {
            printf("Please wait your request in process\n");
            samecity();
        }

        printf("Enter 0 for furthur more process othwise enter any 11 for to stop process\n");
        scanf("%d",&choice2);
      }
      while(choice2==0);
}
void removegarbage()
{
    int a;
    for(a=0;a<Total_Contacts;a++)
    {
        Contacts[a][20]="-1";
    }

}
void openaccount(char name[20],char add[40],char gend[20],char cit[20],char email[40],char Contact[20])
{
    strcpy(names[counter],name);
    strcpy(Address[counter],add);
    strcpy(Gender[counter],gend);
    strcpy(City[counter],cit);
    strcpy(emails[counter],email);
    strcpy(Contacts[counter],Contact);
    counter++;
    printf("Thanks for storing contact in our system\n");
}
int change(char id2[20])
{
    int a,b=0;
    for(a=0;a<Total_Contacts;a++)
    {
        if(strcmp(names[a],id2)==0)
        {
            printf("Enter name\n");
            scanf("%s",names[a][20]);
            printf("Enter your address\n");
            scanf("%s",Address[a][40]);
            printf("Enter your gender\n");
            scanf("%s",Gender[a][20]);
            printf("Enter your city\n");
            scanf("%s",City[a][20]);
            printf("Enter your email\n");
            scanf("%s",emails[a][40]);
            printf("Enter your number\n");
            scanf("%s",Contacts[a][20]);
            printf("Congrats contact is modified successfullly\n");
            b=1;
        }


    }
    if(b==0)
    {
        printf("Sorry contact number does not found\n");
        return -1;
    }
    else if(b==1)
    {
        return -5;
    }

}
void search(char id2[20])
{
    int a,b=0;
    for(a=0;a<Total_Contacts;a++)
    {
        if(strcmp(names[a],id2)==0)
        {
            printf("Wait system found your name matching details\n");
            printf("Name: %s\n",names[a]);
            printf("Address: %s\n",Address[a]);
            printf("Gender: %s\n",Gender[a]);
            printf("City: %s\n",City[a]);
            printf("Email: %s\n",emails[a]);
            printf("Contact number: %s\n",Contacts[a]);
            b=1;
        }

    }
    if(b==0)
    {
        printf("Sorry name you searched does not exists\n");

    }

}
void deletedata(char id3[20])
{
    int a,b=0;
    for(a=0;a<Total_Contacts;a++)
    {

        if(strcmp(names[a],id3)==0)
        {
            printf("Yes system found matching name\n");
            char copy1[20]="None";
            char copy2[40]="None";
            char copy3[20]="None";
            char copy4[20]="None";
            char copy5[20]="None";
            char copy6[40]="None";
            strcpy(names[a],copy1);
            strcpy(Address[a],copy2);
            strcpy(Gender[a],copy3);
            strcpy(emails[a],copy6);
            strcpy(City[a],copy4);
            strcpy(Contacts[a],copy5);
            printf("Congratulations all data is deleted\n");
            b=1;
        }

    }
    if(b==0)
    {
        printf("Sorry your searched name does not exists\n");
    }

}
void samecity()
{
    int a,b=0;
    char id[20];
    printf("Enter name of city you want to search in system\n");
    scanf("%s",id);
    for(a=0;a<Total_Contacts;a++)
    {
        if(strcmp(City[a],id)==0)
        {
            printf("*******Contact number of that city with details*********\n");
            printf("Name: %s\n",names[a]);
            printf("Adress: %s\n",Address[a]);
            printf("Email: %s\n",emails[a]);
            printf("City: %s\n",City[a]);
            printf("Contact number: %s\n",Contacts[a]);
            printf("\n");
            b=1;
        }

    }
    if(b==0)
    {
        printf("Sorry one found of that city\n");
    }
}
