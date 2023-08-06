#include <stdio.h>

void arrayrev (int arr[] )
{
            printf("The array is after change is" );
    for (int i = 0; i < 9; i++)
    {
        for (int j = 9-i ; j< 0 ; j--)
        
        {
            if (arr[i] == arr[j])       
            {
                break;
            }
            else 
            {
                int x = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = x ;
            } 
            
            printf(" %d \n", arr[i]);
        }
        
    }
    
}
int main(  )
{
    int arr[]={12,3,4,6,8,43,26,77,24};
    
        printf("Array before changing is \n");
    for (int r = 0; r < 9; r++)
    {
        printf("%d \n", arr[r]);
    }
    
    arrayrev(arr);
    return 0 ;
}