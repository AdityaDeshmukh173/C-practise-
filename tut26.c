#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Lets learn about pointers \n");
    
    int a= 76 ;
    int* ptra = &a ;
    int* ptr2 = NULL ;

    printf("The value of a = %d \n", a);
    printf("The adress of pointer to a is %x \n ", &a);
    printf("The value of pointer to a is %x \n", ptra);
    printf("the value of a is %p \n", *ptra);
    printf("The garbage value of ptr2 is %p \n ", ptr2 );


    return 0;
    }