//Reverse 50 digits

#include <stdio.h>

void get_input (char string[], int size);
void reverse (char string[], int size);

int main()
{
    char str[50];
    
    get_input (str, 50);
    reverse (str, 50);
}

void get_input (char string[], int size){
    for (int i = 0; i < size; i++){
        printf ("Enter your digit %d:", i+1);
        scanf (" %c", &string[i]);
    }
}

void reverse (char string[], int size){
    int k = 0;
    char str[51];
    for (int j = (size-1) ; j >= 0; j--){
        str[k] = string [j];
        k++;
    }
    str [51] = '\0';
    
    printf ("%s", str);
}