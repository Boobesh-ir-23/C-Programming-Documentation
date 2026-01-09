//Find the length of the string (one word)

#include <stdio.h>

void get_input (char string[]);
int get_length (char string[]);

int main()
{
    char str [20];
    get_input (str);
    
    int length = get_length (str);
    printf ("The length of the string is: %d", length);
}

void get_input (char string []){
    printf ("Enter your string: ");
    scanf ("%s", string);
}

int get_length (char string[]){
    int x = 0;
    int len = 0;
    while (x == 0){
        if (string[len] == '\0'){
            x = 1;
        } else {
            len++;
        }
    }
    return len;
}