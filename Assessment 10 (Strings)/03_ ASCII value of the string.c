//ASCII Value of a string

#include <stdio.h>

int main()
{
    char string_1 [20];
    printf ("Enter your string: ");
    scanf ("%s", string_1);
    
    printf ("The ASCII value of this string: \n");
    
    for (int i = 0; i < 20; i ++){
        if (string_1[i] == '\0'){
            break;
        } else {
            printf ("%d,", string_1[i]);
        }
    }
}