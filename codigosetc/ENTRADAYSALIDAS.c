#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    FILE *texto = fopen("C:/Users/campo/OneDrive/Escritorio/codigo/hola.data", "r+"); // accede a un archivo. EJEMPLO, segundo parametro es el como quiero acceder al archivo
    if(!texto){ // esto detecta si el archivo existe o si se encuentra
        printf("No he podido abrir el archivo");
        return 1;
    }

    do
    {
        long posicion = ftell(texto); // Comando para saber donde esta el cursor, siempre sera un long
        int leido = fgetc(texto); // devuelve el valor que hay en el archivo texto
        if(leido-48 > 3){
            printf("%ld %c\n", posicion, (char) leido);
        }
    } while(!feof(texto)); // esto indica si el valor devuelto es distinto a el valor final

    printf("\n======= FIN =======");

    // fseek(texto, 5, SEEK_SET);  mover el cursor.

    fclose(texto);
}