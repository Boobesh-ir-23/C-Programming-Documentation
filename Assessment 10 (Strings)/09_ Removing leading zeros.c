// Remove the leading zeros

#include <stdio.h>

void get_input (char string[], int length);
void remove_zero (char string[],int length);

int main()
{
    char str [51];
    
    get_input (str, 51);
    remove_zero (str, 51);
}

void get_input (char string[], int length){
    for (int i = 0; i < length; i++){
        printf ("Enter your number: ");
        scanf (" %c", & string[i]);
    }
}

void remove_zero (char string[], int length) {
    int count = 0;
    int num;
    for (int j = 0; j < length; j++){
        num = string[j] - '0';
        if (num > 0){
            break;
        } else {
            count++;
        }
    }
    printf ("The valid number is: ");
    
    for (int k = count; k < length; k++){
        printf ("%c", string [k]);
    }
    
}