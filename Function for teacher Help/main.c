#include <stdio.h>
int Averageofeachtest(int);
int Averageofwholeclass(int);
int Averageofstudentindividually(int);
int scoreofstudentintest(int);
int studentHighestMarks(int);
int studentLowestMarks(int);
int studentHighestMarksoverall(int);
int studentLowestMarksoverall(int);
int maxaverageoverall(int);
int minaverageoverall(int);
void main()
{
    int c;
    printf("**********************************************************\n");
    printf("Enter 1 for Average of each test\n");
    printf("Enter 2 for Average of whole class\n");
    printf("Enter 3 for Average of student by using 1 to 5 for individuals\n");
    printf("Enter 4 for Score of student in a test\n");
    printf("Enter 5 for which student obtained highest marks in a test\n");
    printf("Enter 6 for which student obtained lowest marks in any specific test\n");
    printf("Enter 7 for which student has collective highest marks?\n");
    printf("Enter 8 for which student has collective lowest marks?\n");
    printf("Enter 9 for which student has highest average?\n");
    printf("Enter 10 for which student has Lowest average?\n");
    scanf("%d",&c);
    if(c==1)
    {
        Averageofeachtest(c);
    }
    else if(c==2)
    {
        Averageofwholeclass(c);
    }
    else if(c==3)
    {
        Averageofstudentindividually(c);
    }
    else if(c==4)
    {
        scoreofstudentintest(c);
    }
    else if(c==5)
    {
        studentHighestMarks(c);
    }
    else if(c==6)
    {
        studentLowestMarks(c);
    }
    else if(c==7)
    {
        studentHighestMarksoverall(c);
    }
    else if(c==8)
    {
        studentLowestMarksoverall(c);
    }
    else if(c==9)
    {
        maxaverageoverall(c);
    }
    else if(c==10)
    {
        minaverageoverall(c);
    }

    return 0;
}
/*Function area for to call to done desire work neat and clean*/

int Averageofeachtest(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m=0,sum,final;
    for(k=0;k<3;k++)
    {    sum=0;
        for(l=0;l<5;l++)
        {
            sum=sum+array[l][m];
        }
        printf("Average of test%d:-",k+1);
        final=sum/5;
        printf("%d",final);
        printf("\n");
        m++;
    }
}

int Averageofwholeclass(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m=0,sum=0,final;
    for(k=0;k<3;k++)
    {
        for(l=0;l<5;l++)
        {
            sum=sum+array[l][m];
        }
        m++;
    }
    final=sum/5;
    printf("Average marks of whole class:-%d",final);
}

int Averageofstudentindividually(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m=0,sum,final[5]={0,0,0,0,0};
    for(k=0;k<5;k++)
    {    sum=0;
        for(l=0;l<3;l++)
        {
            sum=sum+array[m][l];
        }
        final[k]=sum/3;
        m++;
    }
    int roll;
    printf("Enter roll number of your student from 1 to 5 to know his average\n");
    scanf("%d",&roll);
    for(a=0;a<5;a++)
    {
        if(a==roll-1)
        {
            printf("His average in total marks:-%d",final[a]);
        }
    }

}


int scoreofstudentintest(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }


    printf("Enter roll number of student from 1to5\n");
    int roll,test;
    scanf("%d",&roll);
    printf("Enter test number 1to3 to know his marks\n");
    scanf("%d",&test);
         for(a=0;a<5;a++)
    {
        if(a+1==roll)
        {
        for(b=0;b<3;b++){
        if(b+1==test)
        {
            printf("His marks in that subject:-%d",array[a][b]);
        }
        }
        }
        }
}



int studentHighestMarks(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m=0,student,final=0,test;
    for(k=0;k<5;k++)
    {
        for(l=0;l<3;l++)
        {
            if(final<array[k][l])
            {
                final=array[k][l];
                student=k+1;
                test=l+1;
            }
        }
    }
    printf("Student:-%d has highest marks:-%d in test:-%d",student,final,test);
}



int studentLowestMarks(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m=0,student,final=1000,test;
    for(k=0;k<5;k++)
    {
        for(l=0;l<3;l++)
        {
            if(final>array[k][l])
            {
                final=array[k][l];
                student=k+1;
                test=l+1;
            }
        }
    }
    printf("Student:-%d has lowest marks:-%d in test:-%d",student,final,test);
}




int studentHighestMarksoverall(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m=0,student,final[5]={0,0,0,0,0},test=0;
    for(k=0;k<5;k++)
    {
        for(l=0;l<3;l++)
        {
           final[k]=final[k]+array[k][l];
        }
    }
    for(k=0;k<5;k++)
    {

        if(test<final[k])
        {
            test=final[k];
            student=k+1;
        }
    }
    printf("Maximum marks obtained by student:-%d       is that:-%d",student,test);

}


int studentLowestMarksoverall(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m=0,student,final[5]={0,0,0,0,0},test=1000;
    for(k=0;k<5;k++)
         {
        for(l=0;l<3;l++)
        {
           final[k]=final[k]+array[k][l];
        }
    }
    for(k=0;k<5;k++)
    {

        if(test>final[k])
        {
            test=final[k];
            student=k+1;
        }
    }
    printf("Minimum marks obtained by student:-%d     is that:-%d",student,test);

}





int maxaverageoverall(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m,sum,student,final[5]={0,0,0,0,0},test=0;
    for(k=0;k<5;k++)
    {    sum=0;
        for(l=0;l<3;l++)
        {
            sum=sum+array[k][l];
        }
        m=sum/3;
        final[k]=m;
    }
    for(k=0;k<5;k++)
    {

        if(test<final[k])
        {
            test=final[k];
            student=k+1;
        }
    }
    printf("Maximum average obtained by student:-%d     is that:-%d",student,test);

}


int minaverageoverall(c)
{
    int a,b,d,array[5][3];
    for(a=0;a<5;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
     for(a=0;a<5;a++)
    {
     printf("Enter marks of three tests of student%d\n",a+1);
        for(b=0;b<3;b++)
        {
            scanf("%d",&array[a][b]);
        }
    }

    int k,l,m,sum,student,final[5]={0,0,0,0,0},test=10000;
    for(k=0;k<5;k++)
    {    sum=0;
        for(l=0;l<3;l++)
        {
            sum=sum+array[k][l];
        }
        m=sum/3;
        final[k]=m;
    }
    for(k=0;k<5;k++)
    {

        if(test>final[k])
        {
            test=final[k];
            student=k+1;
        }
    }
    printf("Minimun average obtained by student:-%d    is that:-%d",student,test);

}


