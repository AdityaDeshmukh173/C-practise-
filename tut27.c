#include <stdio.h>
int main(  )
{
   // int a = 34 ;
   // int* ptra =&a ;
   // printf("%d \n ", ptra);
   // printf("%d \n ", ptra+1);
   // printf("%d \n", ptra+2);
    
    int arr[]={1,2,3,4,5,67,8};
    
    printf("Value at position 3 of the array is %d \n",arr[3]);
    printf("The address of the first element of the array is %d\n",&arr[0]);
    printf("The address of the first element of the array is %d\n", arr);
    printf("The address of the first element of the array is %d\n",&arr[1]);
    printf("The address of the first element of the array is %d\n", arr +1  );
    
    printf("The value at address of the first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of the first element of the array is %d\n", arr[0]);
    printf("The value at address of the first element of the array is %d\n", *(arr));
    printf("The value at address of the first element of the array is %d\n",*(&arr[1]));
    printf("The value at address of the first element of the array is %d\n", *(arr +1  ));

     return 0 ;
}