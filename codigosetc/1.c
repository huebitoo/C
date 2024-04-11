#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
   int arr[6] = {3, 5, 1, 0, 2, -2}, c = 0;
   int *b = arr;
   for(int i = 0; i < 6; i++){
      c += *b;
      *b = c;
      b++;
   }
   for(int i = 0; i < 6; i++){
      printf("%d ", arr[i]);
   }
}