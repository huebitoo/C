#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	char reg[16][7] = {"XV", "I", "II", "III", "IV", "V", "RM", "VI", "VII", "VIII", "IX", "X", "XI", "XII", "XIII", "XIV"};
	char meses[12][20] = {"ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO", "AGOSTO", "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};
	int anos[15][12][16], suma = 0;
	
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 12; j++){
			for(int k = 0; k < 16; k++){
				anos[i][j][k] = rand() % 1000;
			}
		}
	}


	for(int i = 0; i < 12; i++){
		printf("PROMEDIO DE LOS 15 AÑOS DEL MES DE %s:\n", meses[i]);
		for(int j = 0; j < 16; j++){
			for(int k = 0; k < 15; k++){
				suma += anos[i][j][k];
			}
			printf("%s: %d\n", reg[j], suma/16);
			suma = 0;
		}
		printf("\n\n");
	}
}