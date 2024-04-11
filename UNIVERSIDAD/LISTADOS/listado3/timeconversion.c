#include <stdio.h>
#include <string.h>

char* timeConversion(char* hora){
    
    if(hora[8] == 'P'){
        if(hora[0] == 1 && hora[1] == 2){
            hora[0] = 0, hora[1] = 0;
            hora[8] = 'A';    
        }
        else{
            hora[1] += 2;
            hora[0] += 1;
            hora[8] = 'A';
        }
    }
    return hora;
}

int main(){
    char hora[10];
    scanf("%s", hora);
    printf("%s", timeConversion(hora));
}