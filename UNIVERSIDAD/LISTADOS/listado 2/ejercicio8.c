#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv){

    if(argc != 3){ // esto detecta si el archivo existe o si se encuentra
        printf("Se necesitan 2 archivos");
        return 1;
    }
    
    FILE *arch = fopen(argv[1], "r");
    FILE *arch2 = fopen(argv[2], "w");

    int cn = 0, cto = 0, letras = 0, crandom = -1, cpa = 1, aux; 
    do
    {
        int leido = fgetc(arch); // devuelve el valor que hay en el archivo texto
        if(isdigit(leido)){
            cn++;
        }
        else if(isalpha(leido)){
            letras++;
        }
        else if(leido != 32 && leido != 10){
            crandom++;
        }
        if((aux == 32 && leido != 32)){
            cpa++;
        }
        else if(aux == 10 && leido != 10){
            cpa++;
        }
        aux = leido;
    } while(!feof(arch)); // esto indica si el valor devuelto es distinto a el valor final
    
    if(crandom == 0 && letras == 0 && cn == 0 && cto == 0){ // cuando se mande un archivo con puros espacios
        cpa = 0;
    }
    fprintf(arch2, "La cantidad de caracteres es %d, la cantidad de palabras son %d, de letras %d, de numeros %d y de simbolos %d.", cn+letras+crandom, cpa, letras, cn, crandom);
    fclose(arch2);
    printf("listo uwu!");
}