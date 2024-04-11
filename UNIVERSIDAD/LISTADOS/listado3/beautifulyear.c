#include <stdio.h>
#include <string.h>
int main(){
     int a, total = 0, x = 1;
     scanf("%d", &a);
     char b[11];
     while(x){
        a++;
        sprintf(b, "%d", a);
        for(int i = 0; i < strlen(b); i++){
            for(int j = i + 1; j < strlen(b); j++){
                if(b[i] == b[j]){
                    total += 1;
                }
            }
        }
        if(total == 0){
            printf("%d", a);
            x = 0;
        }
        else{
            total = 0;
        }
     }
}