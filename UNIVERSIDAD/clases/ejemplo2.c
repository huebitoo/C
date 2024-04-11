#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("########################################################\n");
  printf("### Compacta un arreglo guardando la mediana de tres ###\n");
  printf("########################################################\n\n");

  int n=0;
  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);
  int A[n];

  // Vamos a llenar el arreglo con valores entre 0 y 9
  for(int i=0; i < n; i++)
    A[i] = rand() % 10;

  // Declaramos un arreglo con un tercio del largo
  int A_salida[n/3];

  for(int i=0; i < n; i+=3) { // Recorremos el arreglo de 3 en 3
    int rep; // Elemento representante de los 3 valores

    // Calculamos la mediana de los 3 elementos
    if ((A[i] < A[i+1] &&  A[i+1] <  A[i+2]) || (A[i+2] <  A[i+1] &&  A[i+1] < A[i]))
       rep = A[i+1];
    else if (( A[i+1] < A[i] && A[i] < A[i+2]) || (A[i+2] < A[i] && A[i] <  A[i+1]))
       rep = A[i];
    else
       rep = A[i+2];

    A_salida[i/3] = rep;
  }

  
  for(int i=0; i < n/3; i++)
    printf("%d ", A_salida[i]);
  printf("\n");
  
  return 0;
}
