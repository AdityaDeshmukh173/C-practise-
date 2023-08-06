#include <stdio.h>
#include <string.h>
union Student
{
    int id ;
    int marks;
    char fav ;
    char name[35] ;
} ;

int main(  )
{
    union Student s1 ;
    s1.id = 1 ;
    s1.marks = 49 ;
    s1.fav = 'u' ;
    strcpy(s1.name ,"Shahu" );

    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The favourite char is %c \n",s1.fav);
    printf("The name is %s \n",s1.name);
       
    return 0 ;
}