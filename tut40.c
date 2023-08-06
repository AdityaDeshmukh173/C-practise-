#include <stdio.h>

void arrayrev (int arr[])
{   
    int temp ;
    for (int i = 0; i < 4; i++)
    {
        //swap item arr[i] with  arr[6-i]
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp ;
    }
    
}

void arrayprint (int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is %d \n", i , arr[i] );
    }

}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7} ;

    
    printf("Before reversing : \n");
    arrayprint(arr) ;
    /*for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is %d \n", i , arr[i] );
    }
    */
 
    arrayrev(arr);

    printf("After reversing : \n");
    arrayprint(arr);
    /*for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is %d \n",i ,arr[i] );
    }
        
    */

}