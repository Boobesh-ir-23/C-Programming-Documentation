// String to integer array

#include <stdio.h>

void get_input(char string[], int length);
void str_2_int (char string[], int length);

int main()
{
    int size = 50;
    char str[size];
    
    get_input (str, size);
    str_2_int (str, size);
}

void get_input (char string[], int length){
    for (int i = 0; i < length; i++){
        printf ("Enter your digit %d:", i+1);
        scanf (" %c", &string[i]);
    }
}

void str_2_int (char string[], int length){
    int z;
    int arr_str [length];
    for (int j = 0; j < length; j++){
        z = string[j] - '0';
        arr_str [j] = z;
    }
    
    printf ("The integer array is: \n");
    for (int k = 0; k < length; k++){
        printf ("%d", arr_str[k]);
    }
}