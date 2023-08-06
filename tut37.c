#include <stdio.h>
#include<string.h>

struct Student 
{
     int id ;
     int marks ;
     char fav;
     char name[30];     
};

int main(  )
{
     struct Student adi , parth , sahil ;
     adi.id = 1 ;
     parth.id = 2;
     sahil.id = 3 ;

     adi.marks = 480 ;
     parth.marks = 400 ;
     sahil.marks = 430 ;

     adi.fav = 'r';
     parth.fav= 'b';
     sahil.fav ='p';

     strcpy(adi.name , "Aditya is the name.");
     print();
     
    // printf("Adi got %d marks \n", adi.marks);
    // printf("Adi name is : %s \n", adi.name);
     //print all the information of the given students 
     return 0 ;
}