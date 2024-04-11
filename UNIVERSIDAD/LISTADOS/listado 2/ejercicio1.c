#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, max = 0;
    printf("Ingrese los valores de n y m respectivamente: ");
    scanf("%d %d", &n, &m);
    if(n <= 0){
        exit(0);
    }

    int A[n]; // CREAMOS EL ARREGLO DE LARGO N

    for(int i = 0; i < n; i++){ // RELLENAR EL ARREGLO
        printf("Ingrese el %d valor: ", i+1);
        scanf("%d", &A[i]); // GUARDAR 
    }

    // VALIDAR LA CANTIDAD DE NUMEROS MAYORES A M
    for(int i = 0; i < n; i++){ 
        if(A[i] < m){
            max += 1;
        }
    }

    int B[max], C[n-max], o = 0, p = 0;
    printf("B[%d] = ", max); 

    for(int i = 0; i < n; i++){ // Ciclo para ordenar los datos en los arreglos necesarios y aprovechamos de printear los valores de B
        if(A[i] < m){
            B[p] = A[i];
            printf("%d ", A[i]);
            p++;
        }
        else{
            C[o] = A[i];
            o++;
        }
    }

    printf("\nC[%d] = ", n-max);
    for(int i = 0; i < (n-max); i++){ // Print para el arreglo C
        printf("%d ", C[i]);
    }
}