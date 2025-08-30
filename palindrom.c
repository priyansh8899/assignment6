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
        printf("\n%s The Given string is Palindrome\n\n", str);
    } 
    else 
    {
        printf("\n%s is not a Palindrome\n\n", str);
    }
    return 0;
}