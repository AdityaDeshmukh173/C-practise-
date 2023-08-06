//Given a and b add them then subtract them subtract them and assign them to a and b using call by reference 


#include <stdio.h>

int swap (int* , int* );
int main(  )
{
    int a= 20 , b = 45 ;
    printf("The vallue of a and b is %d   %d respectively \n ",a,b);

    swap(&a,&b);
    printf("The value of a and b now is %d   %d resp. \n ",a,b);

}

int swap (int* x , int* y)
{
    int add , sub ;

    add = *x+*y ;
    sub= *x-*y ;

    *x = add ;
    *y = sub ;

}