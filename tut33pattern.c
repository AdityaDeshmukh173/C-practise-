#include <stdio.h>

int star (int rows )
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");

        }

        printf("\n");
        
    }
    
}

int revstar (int rows )
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows-i; j++)
        {
            printf("*");

        }

        printf("\n");
        
    }
    
}

int main(  )
{
    int rows, type ;

    printf("Enter 0 for star pattern or 1 for reverse star pattern \n");
    scanf("%d",&type);
    printf("Hoe many rows you want ? \n ");
    scanf("%d", &rows );

    switch (type)
    {
    case 0:
        star(rows);
        break;
    
    case 1 :
        revstar(rows);
        break;
    
    default:
    printf("You have entered an invalid choise \n");
        break;
    }
    
    
     return 0 ;
}