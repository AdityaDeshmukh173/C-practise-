#include <stdio.h>

typedef struct Student 
{
     int id ;
     int marks ;
     char fav;
     char name[30];     
} std ;

int main(  )
{
    typedef int* intptr ;
    intptr a, b ; 
    int c = 34 ;
    
    a = &c ;
    b = &c ;


  //  struct Student s1 ,s2 ;
    /*
    std s1 , s2 ;           // Old name or new name both can be used.
    s1.id = 34 ;
    s2.id = 44 ;

    printf("Value of s1's Id is %d \n", s1.id) ;
    printf("Value of s2's Id is %d \n", s2.id) ;
    */
    /*
//    typedef <previous_name> <alias_name> ;
    typedef unsigned long ul ;
    typedef int integer;
    integer a= 4 ;
    printf("The value of a is %d", a);
    ul l1 , l2 ,l3 ;
    */
    return 0 ;
}