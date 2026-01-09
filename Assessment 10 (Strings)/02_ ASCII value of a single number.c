//ASCII Value of a single number

#include <stdio.h>

int main()
{
    int num;
    printf ("Enter your number: ");
    scanf ("%d", &num);
    
    int ASCII_val = num + 48;
    printf ("The ASCII Value of the number: %d", ASCII_val);
    
}