#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int** leerMatriz(char* entrada){
	FILE* archivoEntrada = fopen(entrada,"r");
	int lineaN,lineaM;
	int dim;
	int i=0;
	int j=0;
	int temporal;
	fscanf(archivoEntrada,"%d\n%d\n",&lineaN,&lineaM);
	dim = lineaN*lineaM;
	int* fila = malloc(dim*sizeof(int));
	int** columna = malloc(lineaN*sizeof(int*));


	while(fscanf(archivoEntrada,"%d ",&temporal)!=EOF){
		printf("Llega aquí\n");
		fila[i] = temporal;	
		printf("Guarda el número actual %d\n", fila[i]);
		printf("Modulo: %d\n",(i %(lineaM-1)));
		if((i %(lineaM)) == 0){	
			printf("Se guardará %d\n", fila[i]);
			columna[j] =	&fila[i];
			j++;
		}	
		i++;
	}
	
	fclose(archivoEntrada);
	return columna;
}

main(int argc, char* argv[]){
	int i,j;
	int**matriz=leerMatriz(argv[1]);
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			printf("%d ", matriz[i][j]);		
		}	
		printf("\n");
	}
	return 0;
}


