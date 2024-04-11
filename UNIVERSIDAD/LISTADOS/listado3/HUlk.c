#include <stdio.h>

int main(){
    char a[10] = "I hate it";
    char b[10] = "I love it";
    int pe; scanf("%d", &pe);
    for(int i = 0; i < pe; i++){
        if(i % 2 == 0){
            if(pe > 1 && i != pe-1){
                for (int i = 0; i < 7; i++)
                {
                    printf("%c", a[i]);
                }
                printf("that ");
            }
            else{
                printf("%s", a);
            }
        }
        else{
            if(pe > 1 && i != pe-1){
                for (int i = 0; i < 7; i++)
                {
                    printf("%c", b[i]);
                }
                printf("that ");
            }
            else{
                printf("%s", b);
            }
        }
    }
} // aceptado