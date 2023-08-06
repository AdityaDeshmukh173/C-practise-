#include <stdio.h>

int fab_recursive(int n )
{   
    if (n==1 || n==2  )
    {
        return n-1 ;
    }
    else{
        return (fab_recursive(n-1) + fab_recursive(n-2));
    }
    
    
}

int fab_iterative(int n)
{
    int a=0 , b=1 ,sum ;

    for (int i = 0; i < n-2; i++)
    {
        sum= a+b ;
        a=b ;
        b=sum ;

    }
    return sum ;   
}


int main(  )
{
    int number ;

    printf("Enter the index to get fibonacci series \n");
    scanf("%d", &number);
    printf("The value of fibonaci number at position no %d using iterative approach is %d \n ",number , fab_iterative(number));
    printf("The value of fibonaci number at position no %d using recursive approach is %d \n",number , fab_recursive(number));
    
    return 0 ;
}