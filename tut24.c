#include <stdio.h>

int main()
{
    int i,m ; float x;

while (1)
{
           
    printf("\nChoose which conversion you want to make \n");
    printf("1.kms to miles    2.inches to foot    3.cms to inches    \n4.pounds to kgs   5.inches to meters   0.to Close \n");
    scanf("%d",&i);

    switch (i)
    {
    case 0:
        printf("Quitting the program...");
        goto z;
    
    
    case 1:
        printf("Enter the kms value\n ");
        scanf("%f",&x);
        printf("The %f kms = %f miles\n",x,x*0.621);

    case 2:
        printf("Enter the distance in inches \n ");
        scanf("%f",&x);
        printf("%f inches equals to %f foot\n",x,x*0.0833);
    
    case 3:
        printf("Enter the distance in cms \n ");
        scanf("%f",&x);
        printf("%f cms equals to %f inches \n",x,x*0.394);

    case 4:
        printf("Enter the weight in pounds \n ");
        scanf("%f",&x);
        printf("%f pounds equals to %f kgs \n",x,x*0.454);
   
    case 5:
        printf("Enter the distance in inches \n ");
        scanf("%d",&x);
        printf("%d inches equals to %f meters \n",x,x*0.0254);
    
//    case :
//        printf("Quitting the program...");
//    case :
//        printf("Quitting the program...");
//    case :
//        printf("Quitting the program...");
    
    default:
        break;
    }   

     
} 
    z:
    return 0;
}