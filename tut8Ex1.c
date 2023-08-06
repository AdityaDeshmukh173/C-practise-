#include <stdio.h>
#include <conio.h>
/*
Print multiplication table of a number entered by the user in pretty form 
Example:
Input 
Enter the Number you want multication table of :
6
Output 
table of 6
6*1= 6
6*2=12
*/
int main()
{
    int a,b,i;

    printf("Enter the number you want multication of ");
    scanf("%d", &a);
     
    for(i=1 ; i<=10 ;i++)
    {
        b=a*i ;
        printf("%d*%d = %d \n",a,i,b );    
    }
    
    getch();
    return 0 ;
   
}