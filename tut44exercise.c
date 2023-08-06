/* You manage a travel agency and you want your n drivers to input their following details :
1. Name 
2. Driving liscence No.
3. Route 
4. Kms traveled 
Your program  should be able to take n as input and drivers will start inputting their details one by one.

Your program should print detaild of the drivers in a beautiful fashion.
create a structure 
*/
#include <stdio.h>
#include <string.h>

struct Driver 
{
    char name[20] ; 
    char license[10] ;
    char route[30] ;
    int kms ;
};


int main()
{
    struct Driver d1,d2,d3 ; 
    int i,j ;

    printf("Enter the details of drivers. \n");

    printf("Enter the name of driver 1 :\n");
    scanf("%s", &d1.name);
    printf("Enter the driving liscence no. : \n");
    scanf("%s", &d1.license);
    printf("Enter your route : \n");
    scanf("%s", &d1.route);
    printf("The distance travelled by the driver 1 is : \n");
    scanf("%d", &d1.kms); 

    printf("Enter the name of driver 2 :\n");
    scanf("%s", &d2.name);
    printf("Enter the driving liscence no. : \n");
    scanf("%s", &d2.license);
    printf("Enter your route : \n");
    scanf("%s", &d2.route);
    printf("The distance travelled by the driver 2 is : \n");
    scanf("%d", &d2.kms); 

    printf("Enter the name of driver 3 :\n");
    scanf("%s", &d3.name);
    printf("Enter the driving liscence no. : \n");
    scanf("%s", &d3.license);
    printf("Enter your route : \n");
    scanf("%s", &d3.route);
    printf("The distance travelled by the driver 3 is : \n");
    scanf("%d", &d3.kms); 


    printf("**** Printing Information of Drivers **** \n");
   
    printf("The name of driver 1 is : %s \n" , d1.name);
    printf("DL no. : %s \n" , d1.license);
    printf("The route of driver 1 is : %s \n", d1.route);
    printf("Distance travelled by driver 1 is : %d \n" ,d1.kms);
    
    printf("The name of driver 2 is : %s \n" , d2.name);
    printf("DL no. : %s \n" , d2.license);
    printf("The route of driver 2 is : %s \n", d2.route);
    printf("Distance travelled by driver 2 is : %d \n" ,d2.kms);
   
    printf("The name of driver 3 is : %s \n" , d3.name);
    printf("DL no. : %s \n" , d3.license);
    printf("The route of driver 3 is : %s \n", d3.route);
    printf("Distance travelled by driver 3 is : %d \n" ,d3.kms);
   
    return 0 ;
}