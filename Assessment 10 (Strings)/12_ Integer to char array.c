// String to integer array

#include <stdio.h>

void get_input(int arr[], int length);
void int_2_char (int arr[], int length);

int main()
{
    int size = 50;
    int arr [size];
    
    get_input (arr, size);
    int_2_char (arr, size);
}

void get_input (int arr[], int length){
    for (int i = 0; i < length; i++){
        printf ("Enter your array digit %d:", i+1);
        scanf (" %d", &arr[i]);
    }
}

void int_2_char (int arr[], int length){
   char z;
   char str [length];
   
   for (int j = 0; j < length; j++){
       z = arr[j] + '0';
       str[j] = z;    
   }
   
   printf ("Charracter array is: \n");
   for (int k = 0; k < length; k++){
       printf (" %c", str[k]);
   }
}