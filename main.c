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
		fila[i] = temporal;	
		if((i %(lineaM)) == 0){	
			columna[j] =	&fila[i];
			j++;
		}	
		i++;
	}
	
	fclose(archivoEntrada);
	return columna;
}

main(int argc, char* argv[]){
	int**matriz=leerMatriz(argv[1]);
	return 0;
}


