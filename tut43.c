#include <stdio.h>
#include<string.h>
void parser (char* string)
{
    int in = 0 ;//variable to track wheather we are inside tag
    int index = 0 ;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i]=='<' )
        {
            in = 1;
            continue;
        }
        else if (string[i]=='>')
        {
            in = 0 ;
            continue;
        }
        if (in ==0)
        {
            string[index] = string[i] ;
            index ++ ;
        }
    }
    string[index] = '\0';
    //remove the trailing spaces from begining 
    while (string[0]==' ')
    {
        //shift the string to the left 
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j +1] ;

        }
        
    }
    //remove the trailing spaces from end
    while (string[strlen(string) -1] == ' ')
    {
        string[strlen(string) -1] = '\0';  
    }
    
    
}
int main(  )
{   
    char string[] = "<h1>   this is a heading    </h1>" ;
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0 ;
}