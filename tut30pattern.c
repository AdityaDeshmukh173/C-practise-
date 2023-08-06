/*Take input from user to choose 0 for triangular star pattern or 1 for reversed triangular star pattern then print the pattern accordingly

*
**
***
****  -> triangular star pattern 

*****
****
***
**
*  -> reversed triangular star pattern 

*/


#include <stdio.h>
int main(  )
{   
    int in ,i , a ;

    printf("Choose between Triangular star pattern by 0 or Reversed triangular star pattern by 1");
    scanf("%d", &in );

    if (in == 0)
    {
        for ( i = 3; i >=0; i--)
        {   
            for ( int j = 0; j<3-i ; j++)
            {
                printf("*");
            }
            
            printf("\n");
        }
        
    }
    else if (in == 1)
    {
        for ( i = 0; i < 3; i++)
        {   
            for ( int j = 0; j < 3-i; j++)
            {
                printf("*");
            }
            
            printf("\n");
        }
        
        
    }
    
        return 0;
}



