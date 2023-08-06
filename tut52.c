#include <stdio.h>
#include <string.h>
int main()
{
    int a = 345 ;
    float b = 8.3 ;
    void *ptr ;   //void ptr cant be printed directly it must be typecasted before
    ptr = &a ;
    printf("The value of a %d \n ", *( (int *)ptr ));
    ptr = &b ;
    printf("The value of b %f \n ", *( (float *)ptr ));
    return 0 ;
}