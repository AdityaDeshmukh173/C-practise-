#include <stdio.h>

int myfunc(int a ,int b)
{
    //auto int sum;
    static int sum ;
    sum++ ;
    printf("The sum is %d \n",sum);

    //sum = a+b ;
    return sum ;
}

int main()
{
    //Declaration - Telling the compiler about the variable (No space reserved)
    //Definition - Declaration + Space reservation
   // printf("The sum is %d \n",sum);
    register int sum = myfunc(3,5); 
    sum = myfunc(3,5); 
    sum = myfunc(3,5); 
    sum = myfunc(3,5); 
//    printf("The sum is %d \n",sum);
    return 0 ;
}