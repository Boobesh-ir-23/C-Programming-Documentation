//Get an integer and print it's each digit as a character

#include <stdio.h>

int get_input (int num);
void to_str (int num, char string[]);
void display (char string[], int len);

int main()
{
    char str [15];
    int x;
    int input = get_input (x);
    
    to_str (input,str);
}

int get_input (int num){
    printf ("Enter the number: ");
    scanf ("%d", &num);
    
    return num;
}

void to_str (int num, char string[]){
    int j = 0;
    int y;
    while (num > 0){
        y = num%10;
        string[j] = y + '0';
        num = num/10;
        j++;
    }
    string [j] = '\0';
    display (string, j);
}

void display (char string[], int len){
    int count = 1;
    if (len == 0){
        printf ("Letter 1: %d", 0);
    }
    for (int k = len-1; k >=0; k--){
        printf ("\n");
        printf ("Letter %d:", count);
        printf ("%c", string[k]);
        count++;
    }
}