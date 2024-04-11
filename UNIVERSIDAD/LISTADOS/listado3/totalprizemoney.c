#include <stdio.h>

int main(){
    int t = 0, x, y, total = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &x, &y);
        for(int j = 0; j < 100; j++){
            if(j < 10){
                total += x;
            }
            else{
                total += y;
            }
        }
        printf("%d\n", total);
        total = 0;
    }
}// Aceptado