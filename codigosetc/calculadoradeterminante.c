#include <stdio.h>

// Regla de sarrus y solo con 3x3

int main(){
    int a, o, determinante = 0, suma = 1;
    printf("Ingrese las dimensiones de la matriz: ");
    scanf("%d", &a);

    int k = a;

    int matriz[a][a+(a-1)];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            printf("Ingrese el valor %d %d de la matriz: ", i, j);
            scanf("%d", &o);
            matriz[i][j] = o;
            matriz[i][k] = o;
            k += 1;
        }
        k = a;
    }

    int e = 0;

    for(int j = 0; j < a; j++){
        for(int i = 0; i < a; i++){
            suma *= matriz[i][i+e];
        }
        e++;
        determinante += suma, suma = 1;
    }

    e = 0, k = 0;

    for(int j = 0; j < a; j++){
        for(int i = a-1; i >= 0; i--){
            suma *= matriz[k][i+e];
            k++;
        }
        e++, k = 0;
        determinante -= suma, suma = 1;
    }
    
    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(j == 0){
                printf("| %d ", matriz[i][j]);
            }
            else if(j == a-1){
                printf("%d |", matriz[i][j]);
            }
            else{
                printf("%d ", matriz[i][j]);
            }
            if(i == a/2 && j == a-1){
                printf("       Determinante igual a %d", determinante);
            }
        }
        printf("\n");
    }
}