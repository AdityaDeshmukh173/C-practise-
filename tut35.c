#include <stdio.h>
#include<string.h>

int main(  )
{   /*
    char s1[] = {"Aditya"};
    char s2[]= {"Shahu"};
    char s3[50];

    printf("The strcmp for s1 ,s2 returned %d ", strcmp(s1,s2));

    //puts(strcat(s1 , s2));
    printf("The length of string s1 is %d \n",strlen(s1));
    printf("The length of string s2 is %d\n",strlen(s2));
    printf("The reverse string s1 is: ");
    puts(strrev(s1));
    printf("The reverse string s2 is: ");
    puts(strrev(s2));

    strcpy(s3 , (strcat(s1,s2)));
    puts(s3);
    */
    
    //allow user to enter two string and then concatenate them by saying that s1 is friend of s2  
    char str1[20];
    char str2[20];
    char str3[30];

    printf("Enter your name \n");
    gets(str1);
    printf("Enter friends name \n");
    gets(str2);
    printf("%s is friend with %s \n", str1,str2);    

    puts(strcat(str1,str2));
    return 0 ;
}       