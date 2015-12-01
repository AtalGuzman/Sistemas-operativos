#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include <unistd.h>

int verificar(char* entrada){
	FILE* archivoEntrada;
	if((archivoEntrada = fopen(entrada,"r"))==NULL){
		return 0;
	}
	close(archivoEntrada);
	return 1;
}

int* leerMatriz(char* entrada){
	FILE* archivoEntrada;
	if((archivoEntrada = fopen(entrada,"r"))==NULL){
		printf("Error: Verifica la existencia del archivo. \n");
	}
	else{
		int lineaN,lineaM;
		int i=0;
		int j=0;
		int temporal;
		fscanf(archivoEntrada,"%d\n%d\n",&lineaN,&lineaM);
		int *matrizPre = malloc((lineaN*lineaM+2)*sizeof(int));
		matrizPre[0] = lineaN;
		matrizPre[1] = lineaM;
		i=2;
		while(fscanf(archivoEntrada,"%d ",&temporal)!=EOF){
			matrizPre[i]=temporal;
			i++;
		}
		fclose(archivoEntrada);

		return matrizPre;
	}
}

void escribirMatriz(int* matriz, char* nombre){
	int i,j;
	FILE* salida=fopen(nombre,"w");
	fprintf(salida,"%d\n%d\n",matriz[0],matriz[1]);
	if(matriz==NULL){
		printf("[NULL]\n");
	}
	else{
		for(i=2;i<(matriz[0]*matriz[1])+2;i++){
			fprintf(salida,"%d ",matriz[i]);
			if((i%matriz[1])==1) fprintf(salida,"\n");
		}
	}
	fclose(salida);
}

void mostrarMatriz(int* matriz){
	int i;
	if(matriz==NULL){
		printf("[NULL]\n");
	}
	else{
		for(i=2;i<(matriz[0]*matriz[1])+2;i++){
				printf("%d ",matriz[i]);
			if((i%matriz[1])==1) printf("\n");
		}
	}
}

void borrarMatriz(int* matriz){
	free(matriz);
}
