#include <stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int a = 0, Palindrome = 1; 
    printf("Enter The String Name :- ");
    scanf("%s", str);  
    for (int i = 0; str[i] != '\0'; i++) 
    {
        a++;
    }
    for (int i = 0, j = a - 1; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            Palindrome = 0; 
            break;
        }
    }
    if (Palindrome) 
    {
        printf("The given string is a Palindrome.\n");
    } 
    else 
    {
        printf("The given string is NOT a Palindrome.\n");
    }
    return 0;
}
