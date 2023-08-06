//Fabonacci series by for loop
#include <stdio.h>

int main ()
{   
    int a=0,b=1,sum,n ,i;

    printf("Enter the no. for fabonacci series \n");
    scanf("%d",&n);

    printf("Fabonacci series is : o 1 ");

    for ( i = 0; i < n-2 ; i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }

    return 0;

}