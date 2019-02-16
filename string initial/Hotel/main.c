#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Item no.1 paratha price::20\n");
    printf("Item no.2 Chaey (tea) price::20\n");
    printf("Item no.3 roti price::15\n");
    printf("Item no.4 Omelete price::20\n");
    printf("Item no.5 Over Easy [half fried] price::20\n");
    printf("Item no.6 Channay price::25\n");
    printf("Item no.7 Yougurt price::20\n");
    printf("Enter 0 for one order or 1 for multiple orders\n");
    int order;
    scanf("%d",&order);


    if(order==0){
    printf("Enter item no.::\n");
    int a;
    scanf("%d",&a);
    printf("Enter quantity you want to order\n");
    int b,c;
    scanf("%d",&b);

    if((a==1)){
    c=20*b;
    printf("Total cost will be:: %d",c);
    }
    else if(a==2){
    c=20*b;
    printf("Total cost will be:: %d",c);
    }
        else if(a==3){
    c=15*b;
    printf("Total cost will be:: %d",c);
    }
        else if(a==4){
    c=20*b;
    printf("Total cost will be:: %d",c);
    }
        else if(a==5){
    c=20*b;
    printf("Total cost will be:: %d",c);
    }
        else if(a==6){
    c=25*b;
    printf("Total cost will be:: %d",c);
    }
        else if(a==7){
    c=20*b;
    printf("Total cost will be:: %d",c);
    }

    }


else if(order==1){
    int inf,stop,total=0;
    for(inf=1;inf>0;inf++){
        printf("Enter -1 if you want to stop orders to buy and want to take bill or 0 for to take orders more\n");
        scanf("%d",&stop);
        if(stop==-1){
        break;
        }
        printf("Enter item no.::\n");
    int a;
    scanf("%d",&a);
    printf("Enter quantity you want to order\n");
    int b,c;
    scanf("%d",&b);


    if((a==1)){
    c=20*b;
    }
    else if(a==2){
    c=20*b;
    }
        else if(a==3){
    c=15*b;
    }
        else if(a==4){
    c=20*b;
    }
        else if(a==5){
    c=20*b;
    }
        else if(a==6){
    c=25*b;
    }
        else if(a==7){
    c=20*b;
    }

    total=total+c;




    }

printf("Your final bill for your orders:: %d",total);


}


    return 0;
}
