// Dynamic memory allocation
/*
ABC Pvt Ltd. manages employee records of other companies.
Employee id can be of any length and can contain any character
For three employee you have to 'take lenght of employee id' as an input in a length integer variable.
Then you have to take employee id as an input and display it on screen.
Store the employee id in a character array which is allocated dynamically.
You have to create only one char array dynamically
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()                          //Failed
{
    int i;
    int *ptr ;

    
    printf("Enter the no. of char in your employee id.\n");
    scanf("%d", &i);

    ptr = (char*)calloc(i,sizeof(char));

    for (int j = 0; j < i; j++)
    {
    printf("Enter your employee id.\n ");
    scanf("%s ",ptr);

    printf("The Employee id of Employee is %s \n",ptr);
    }
    
    return 0;
}

//Failed !!!!