/*3 types of gifts 
subjest passed and gifts 
maths and science   45
maths      15
science      15

print type of gift you are giving to them */
#include <stdio.h>
int main()
{
    int a,b;

    printf("If passing marks are 20\n"); 
    printf("Entre your marks in maths out of 50.\n");
    scanf("%d",&a);
    
    printf("Enter the marks in science out of 50\n");
    scanf("%d",&b);

    if (a>=20 && b>=20)
    {
        printf("You have won the gift of 45 rupees");
    }
    else if (a>=20)
    {
    printf("You have won the gift of 15 rupees for maths.");
    }
    else if (b>=20)
    {
        printf("You have won the gift of 15 rupees for science.");
    }
    else
    {
        printf("You have won nothing !!!");
    }

    return 0;

}
