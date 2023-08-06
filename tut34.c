#include <stdio.h>

void printstr (char str[] )
{
    int i=0 ;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    
}
int main(  )
{
    //char str[] = {'s','h','a','h','u','\0'};
    //char str[] = "shahu";
    char str[35];
    gets(str);
    
    printf("Using custom function printstr : \n");
    printstr(str);
    printf("\nUsing printf \n %s \n" , str);
    printf("Using puts: \n");
    puts(str);
     return 0 ;
}