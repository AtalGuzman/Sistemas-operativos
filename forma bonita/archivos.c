#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "archivos.h"

M* leerMatriz(char* entrada){
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
	
	M* matriz = malloc(sizeof(M));
	matriz->f=lineaN;
	matriz->c= lineaM;
	matriz->m= columna;
	fclose(archivoEntrada);
	return matriz;
}

void escribirMatriz(M* matriz, char* nombre){
	int i,j;
	FILE* salida=fopen(nombre,"w");
	fprintf(salida,"%d\n%d\n",matriz->f,matriz->c);
	for(i=0;i<matriz->f;i++){
		for(j=0;j<matriz->c;j++){
			fprintf(salida,"%d ",matriz->m[i][j]);
		}	
		fprintf(salida,"\n");
	}
	fclose(salida);
}

void mostrarMatriz(M* matriz){
	int i,j;
	for(i=0;i<matriz->f;i++){
		for(j=0;j<matriz->c;j++){
			printf("%d ",matriz->m[i][j]);
		}	
		printf("\n");
	}
}
