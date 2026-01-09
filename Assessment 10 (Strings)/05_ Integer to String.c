//Get an Integer and print it as a string

#include <stdio.h>

int get_input (int num);
void str (int num, char string[]);
void reverse (char string[], int len);

int main()
{
    int x;
    int z = get_input (x);
    
    char str1 [15];
    str (z, str1);
    
    
}

int get_input (int num){
    printf ("Enter your number: ");
    scanf ("%d", &num);
    
    return num;
}

void str (int num, char string[]){
    int y;
    int i  = 0;
    
    while (num > 0){
        y = num%10;
        string[i] = y + '0';
        num = num/10;
        i++;
    }
    
    string [i] = '\0';
    reverse (string, i);
}

void reverse (char string[], int len){
    char fin_str [20];
    int k = 0;
    
    for (int j = len - 1; j >= 0; j--){
        fin_str[k] = string[j];
        k++;
    }
    
    fin_str[k] = '\0';
    printf ("The string is: %s", fin_str);
}