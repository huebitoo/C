#include <stdio.h>

int main(){
    int a, total = 0, b = 0;
    scanf("%d", &a);
    int array[a];
    for(int i = 0; i < a; i++){
        scanf("%d", &array[i]);
    }
    for(int x = 0; x < a; x++){
        for(int i = 0; i < a; i++){
            total = array[i];
            for(int j = 0; j < a; j++){
                if(total == array[j]){
                    b += 1;
                }
                if(b > 1){
                    b = 0;
                    break;
                }
            }
            if(b == 1){
                printf("%d", total);
                return 0;
            }
        }
    }
} // Aceptado