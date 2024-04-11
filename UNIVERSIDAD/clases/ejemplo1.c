#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXCHAR 50

int main(int argc, char** argv) {

  printf("####################################\n");
  printf("### Transforma todo a mayúsculas ###\n");
  printf("####################################\n\n");

  if(argc != 3) {
    printf("Uso: %s <archivo de entrada> <archivo de salida>\n", argv[0]);
    exit(0);
  }

  FILE *fp1  = fopen(argv[1],"r");
  FILE *fp2  = fopen(argv[2],"w");

  // Declaramos un buffer para leer las líneas del archivo
  char buffer[MAXCHAR];

  // Mientras queden líneas por leer, avanzamos
  while (!feof(fp1)) {
    // Leemos la línea actual y la dejamos copiada en buffer
    if(fgets(buffer, MAXCHAR, fp1)) {

      int largo = strlen(buffer);

      for(int i=0; i < largo; i++){
	      if(islower(buffer[i])){
	        fputc(toupper(buffer[i]), fp2);
          }
	      else{
	        fputc(buffer[i], fp2);
          }
      }
    }
  }

  fclose(fp1);
  fclose(fp2);

  return 0;
}
