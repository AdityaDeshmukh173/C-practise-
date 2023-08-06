/*

kms to miles
inches to foot 
cms to inches 
pounds to kgs
inches to meters

*/
#include <stdio.h>

int main()
{
    int i,m ; float x;

    for ( m = 0; m < 6; m++)
    {
           
    printf("\nChoose which conversion you want to make \n");
    printf("1.kms to miles    2.inches to foot    3.cms to inches    \n4.pounds to kgs   5.inches to meters   0.to Close \n");
    scanf("%d",&i);

    if (i==0)
    {
        break;
    }
    
    if (i==1)
    {
        printf("Enter the distance in kms \n ");
        scanf("%f",&x);
        printf("%f kms equals to %f miles\n",x,x*0.621);
    }

    if (i==2)   
    {
        printf("Enter the distance in inches \n ");
        scanf("%f",&x);
        printf("%f inches equals to %f foot\n",x,x*0.0833);
    }
    if (i==3)
    {
        printf("Enter the distance in cms \n ");
        scanf("%f",&x);
        printf("%f cms equals to %f inches \n",x,x*0.394);
    }
    if (i==4)
    {
        printf("Enter the weight in pounds \n ");
        scanf("%f",&x);
        printf("%f pounds equals to %f kgs \n",x,x*0.454);
    }
    if (i==5)
    {
        printf("Enter the distance in inches \n ");
        scanf("%d",&x);
        printf("%d inches equals to %f meters \n",x,x*0.0254);
    }
    

    }


    return 0;


}