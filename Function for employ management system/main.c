#include <stdio.h>
#include <string.h>
#define Total_Employs 10
char names[Total_Employs][20];
int id_number[Total_Employs];
char role[Total_Employs][20];
int salary[Total_Employs];
int counter=0;

int main()
{
    char nam[20];
    int id;
    int id2;
    int id3;
    char rol[20];
    int sal;
    int action;
    int action2;
    int choice;
    int choice2;
    removegarbage();
    do
    {
        printf("Enter 1 for store employee personal data\n");
        printf("Enter 2 for change information of your employee data\n");
        printf("Enter 3 for to search employee data\n");
        printf("Enter 4 for to delete employee data\n");
        printf("Enter 5 for search employee salary greater than 20000\n");

        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter name of your employee\n");
            scanf("%s",nam);
            printf("Enter id number for your employee\n");
            scanf("%d",&id);
            printf("Enter role of your employee\n");
            scanf("%s",rol);
            printf("Enter salary of your employee\n");
            scanf("%d",&sal);
            int number;
            number=openaccount(nam,id,rol,sal);
            printf("Congrats your employee account number: %d\n",number);
            printf("Thanks for visiting our registration branch\n");
        }
        else if (choice==2)
        {
            printf("Enter id number for to search your employee to edit details\n");
            scanf("%d",&id2);
            action2=change(id2);
            if(action2==-5)
            {
                printf("Congrats your employee details is modified\n");
            }
        }
        else if(choice==3)
        {
            printf("Enter id number for to search your employee details\n");
            scanf("%d",&id2);
            search(id2);
        }
        else if(choice==4)
        {
            printf("Enter id number for to delete against its data\n");
            scanf("%d",&id3);
            deletedata(id3);
        }
        else if(choice==5)
        {
            printf("Please wait your request in process\n");
            checksalary();
        }

        printf("Enter 0 for furthur more process othwise enter any 11 for to stop process\n");
        scanf("%d",&choice2);
      }
      while(choice2==0);
}
void removegarbage()
{
    int a;
    for(a=0;a<Total_Employs;a++)
    {
        salary[a]=-1;
    }

}
int openaccount(char nam[20],int id,char rol[20],int sal)
{
    strcpy(names[counter],nam);
    id_number[counter]=id;
    strcpy(role[counter],rol);
    salary[counter]=sal;
    counter++;
    return(counter-1);
}
int change(int id2)
{
    int a,b=0;
    for(a=0;a<Total_Employs;a++)
    {
        if(id_number[a]==id2)
        {
            printf("You have to be enter information again to remove errors\n");
            printf("Enter id number of your employee again to change\n");
            scanf("%d",&id_number[a]);
            printf("Enter name of your employee again for to change\n");
            scanf("%s",names[a]);
            printf("Enter salary of your employee\n");
            scanf("%d",&salary[a]);
            printf("Enter role of your employee\n");
            scanf("%s",role[a]);
            b=1;
        }

    }
    if(b==0)
    {
        printf("Sorry id number does not match in our records\n");
        return -1;
    }
    else if(b==1)
    {
        return -5;
    }

}
int search(int id2)
{
    int a,b=0;
    for(a=0;a<Total_Employs;a++)
    {
        if(id_number[a]==id2)
        {
            printf("Your employee with matching id numbers given below in details\n");
            printf("Id number: %d\n",id_number[a]);
            printf("Name: %s\n",names[a]);
            printf("Salary: %d\n",salary[a]);
            printf("Role: %s\n",role[a]);
            b=1;
        }

    }
    if(b==0)
    {
        printf("Sorry id number does not match in our records\n");
        return -1;
    }

}
int deletedata(int id3)
{
    int a,b=0;
    for(a=0;a<Total_Employs;a++)
    {

        if(id_number[a]==id3)
        {
            printf("Yes system found your employee id number\n");
            id_number[a]=0;
            char copy1[]="None";
            char copy2[]="None";
            strcpy(names[a],copy1);
            salary[a]=-1;
            strcpy(role[a],copy2);
            printf("Congratulations all data is deleted\n");
            b=1;
        }

    }
    if(b==0)
    {
        printf("Sorry your id number does not exists\n");
    }

}
int checksalary()
{
    int a,b=0;
    for(a=0;a<Total_Employs;a++)
    {
        if(salary[a]>=20000)
        {
            printf("*******Details of employee with salary more than 20000*********\n");
            printf("Id number: %d\n",id_number[a]);
            printf("Name: %s\n",names[a]);
            printf("Salary: %d\n",salary[a]);
            printf("Role: %s\n",role[a]);
            printf("\n");
            b=1;
        }

    }
    if(b==0)
    {
        printf("Sorry we no one employee with salary more than 20000\n");
    }
}
