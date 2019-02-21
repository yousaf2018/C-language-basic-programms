#include <stdio.h>
int multiplicationofarrays(int);
int main()
{
    int h;
    printf("Enter 1 for Multiplication of two arrays 3*3\n");
    scanf("%d",&h);
    if(h==1)
    {
   multiplicationofarrays(h);
    }
    else
    printf("Wrong input try again\n");
    return 0;
}
int multiplicationofarrays(h)
{
    int a,b,c;
    int array[3][3];
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=0;
        }
    }
        printf("Enter values of 1st 2d array for multiplication\n");
        for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
         scanf("%d",&array[a][b]);
        }
    }
    printf("Enter values of second 2d array for multiplication\n");
      int array2[3][3],array3[3][3];
          for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            array2[a][b]=0;
            array3[a][b]=0;
        }
    }
        for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
         scanf("%d",&array2[a][b]);
        }
    }
    printf("\n");
    printf("Your final result of multiplication of both arrays\n");
    int w,p;
            for(a=0;a<3;a++)
    {
        p=0,w=0;
        for(b=0;b<9;b++)
        {
         if(p==3)
         {
             p=0;
             w++;

         }
         array3[a][w]=array[a][p]*array2[p][w]+array3[a][w];
         p++;

        }


    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
        printf("    %d",array3[a][b]);
        }
        printf("\n");
    }

}
