#include <stdio.h>
int additionofarrays(int);
int main()
{
    int h;
    printf("Enter 1 for addition of two arrays\n");
    scanf("%d",&h);
    if(h==1)
    {
    additionofarrays(h);
    }
    else
    printf("Wrong input try again\n");
    return 0;
}
int additionofarrays(h)
{
    int a,b,c;
    int array[3][2];
    for(a=0;a<3;a++)
    {
        for(b=0;b<2;b++)
        {
            array[a][b]=0;
        }
    }
        printf("Enter values of second 2d array for addition\n");
        for(a=0;a<3;a++)
    {
        for(b=0;b<2;b++)
        {
         scanf("%d",&array[a][b]);
        }
    }
    printf("Enter values of second 2d array for addition\n");
      int array2[3][2];
          for(a=0;a<3;a++)
    {
        for(b=0;b<2;b++)
        {
            array2[a][b]=0;
        }
    }
        for(a=0;a<3;a++)
    {
        for(b=0;b<2;b++)
        {
         scanf("%d",&array2[a][b]);
        }
    }
    printf("\n");

            for(a=0;a<3;a++)
    {
        for(b=0;b<2;b++)
        {
         array[a][b]=array[a][b]+array2[a][b];
        }

    }
    printf("Your final addition of both arrays\n");
    for(a=0;a<3;a++)
    {
        for(b=0;b<2;b++)
        {
         printf("        %d",array[a][b]);
        }
          printf("\n");
    }


}
