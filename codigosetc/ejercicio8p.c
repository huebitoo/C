#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv){
    
    FILE *arch = fopen("C:/Users/campo/OneDrive/Escritorio/codigo/hola.data", "r");
    FILE *arch2 = fopen("C:/Users/campo/OneDrive/Escritorio/codigo/result.txt", "w");

    int cn = 0, cto = 0, letras = 0, crandom = 0, cpa = 1, aux = 32; 
    do
    {
        int leido = fgetc(arch); // devuelve el valor que hay en el archivo texto
        if(isdigit(leido)){
            cn++;
        }
        else if(isalpha(leido)){
            letras++;
        }
        else if((leido == 32 && aux != 32)){
            cpa++;
        }
        else if(leido != 32 && leido != 10){
            crandom++;
        }
        else{
            continue;
        }
        aux = leido;
    } while(!feof(arch)); // esto indica si el valor devuelto es distinto a el valor final
    if(crandom-1 == 0 && letras == 0 && cn == 0 && cto == 0){
        cpa = 0;
    }
    fprintf(arch2, "La cantidad de caracteres es %d, la cantidad de palabras son %d, de letras %d, de numeros %d y de simbolos %d.", cn+letras+crandom-1, cpa, letras, cn, crandom-1);
    fclose(arch2);
}