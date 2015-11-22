#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct matriz{
	int f;
	int c;
	int ** m;
}M;

M leerMatriz(char* entrada){
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
			printf("%d ",fila[i]);
			j++;
		}	
		i++;
		printf("\n");
	}
	
	M matriz;
	matriz.f=i/lineaN;
	matriz.c=j;
	matriz.m= columna;
	fclose(archivoEntrada);
	return matriz;
}

main(int argc, char* argv[]){
	int i,j;
	M matriz=leerMatriz(argv[1]);
	printf("Filas: %d , columnas %d\n", matriz.f,matriz.c);

	for(i=0;i<matriz.f;i++){
		for(j=0;j<matriz.c;j++){
			
			printf("%d ",matriz.m[j][i]);
		}	
		printf("\n");
	}
	return 0;
}

