#include <stdio.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d \n", i, arr[i]);
    }
    arr[0] = 320;
    // Very important point if you change any value here it will affect in the main ....
    return 0;
}


int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d \n", i, *(ptr + i));
    }
    *(ptr + 2) = 5353;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d %d is %d \n ", i, j, arr[i][j]);
        }
    }
}


int main()
{
    int arr[][2] = {{2, 9}, {13, 1}};
    // int arr[]= {23 , 24 ,4, 6 };

    // printf("The value at index 0 is %d \n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d \n", arr[0]);

    // func2(arr);
    // func2(arr);

    func3(arr);
    return 0;
}