#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct matriz{
	int f;
	int c;
	int ** m;
}M;


M* crearMatriz(int lineaN,int lineaM, int** columna){
	M* matriz = malloc(sizeof(M));
	matriz->f=lineaN;
	matriz->c= lineaM;
	matriz->m= columna;
	return matriz;
}

M* leerMatriz(char* entrada){
	FILE* archivoEntrada = fopen(entrada,"r");
	int lineaN,lineaM;
	int i=0;
	int j=0;
	int temporal;
	
	fscanf(archivoEntrada,"%d\n%d\n",&lineaN,&lineaM);

	int **matrizPre = (int **)malloc(sizeof(int *)*lineaN);
	for (i=0;i<lineaN;i++){
		matrizPre[i] = (int *) malloc (sizeof(int)*lineaM);
	}

	i=0;
	while(fscanf(archivoEntrada,"%d ",&temporal)!=EOF){
		matrizPre[i][j]=temporal;	
		j++;
		if((j%lineaM)==0){
			i++;
			j=0;		
		}
	}
	M* matriz = crearMatriz(lineaN,lineaM,matrizPre);
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
	if(matriz==NULL){
		printf("[NULL]\n");	
	}
	else{
		for(i=0;i<matriz->f;i++){
			for(j=0;j<matriz->c;j++){
				printf("%d ",matriz->m[i][j]);
			}	
			printf("\n");
		}
	}
}

void borrarMatriz(M** matriz){
	int i;
	if(*matriz!=NULL){
		for(i =0; i<(*matriz)->f;i++){
			(*matriz)->m[i]=NULL;
		}
		free(*matriz);
		*matriz=NULL;
	}
	else{
		printf("[NULL]\n");
	}
}

int main(int argc, char* argv[]){
	M* matriz=leerMatriz(argv[1]);
	printf("FILA: %d, Columna %d\n",matriz->f,matriz->c);
	mostrarMatriz(matriz);
	borrarMatriz(&matriz);
	mostrarMatriz(matriz);	
	//M* matriz2 = NULL;
	//M* matriz2=leerMatriz("G");
	//borrarMatriz(matriz2);
	//mostrarMatriz(matriz2);
	return 0;
}
