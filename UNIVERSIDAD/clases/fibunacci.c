#include <stdio.h>


int fibunacci(int i){
    if(i == 0 || i == 1){
        return i;
    }
    return fibunacci(i-2) + fibunacci(i-1);
}


int main(){
    int n;
    printf("A: ");
    scanf("%d", &n);
    for(unsigned int i = 0; i < n; i++){
        printf("%d ", fibunacci(i));
    }
}