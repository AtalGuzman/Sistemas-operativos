#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct matriz {
   int f;
   int c;
   int** m;
}M;

void suma(M* a, M* b, M* c){
	
	if((a->f != b->f) || (a->c != b->c)){
		printf("Liberar\n");
		c = NULL;
		free(c);
		return;
	}
	
	c->f = a->f;
	c->c = a->c;
	
	c->m = (int **)malloc(sizeof(int *)*a->f);
	
	int i,j;
	for (i=0;i<a->f;i++){
		c->m[i] = (int *) malloc (sizeof(int)*a->c);
	}
	
	//comenzar a sumar
	for(i=0;i<a->f;i++){
		for(j=0;j<a->c;j++){
			c->m[i][j] = a->m[i][j] + b->m[i][j];
		}
	}
	
	for(i=0;i<a->f;i++){
		for(j=0;j<a->c;j++){
			printf("%i ",c->m[i][j]);
		}
		printf("\n");
	}
	
	return;
}

void resta(M* a, M* b, M* c){
	
	if((a->f != b->f) || (a->c != b->c)){
		printf("Liberar\n");
		c = NULL;
		free(c);
		return;
	}
	
	c->f = a->f;
	c->c = a->c;
	
	c->m = (int **)malloc(sizeof(int *)*a->f);
	
	int i,j;
	for (i=0;i<a->f;i++){
		c->m[i] = (int *) malloc (sizeof(int)*a->c);
	}
	
	//comenzar a sumar
	for(i=0;i<a->f;i++){
		for(j=0;j<a->c;j++){
			c->m[i][j] = a->m[i][j] - b->m[i][j];
		}
	}
	
	for(i=0;i<a->f;i++){
		for(j=0;j<a->c;j++){
			printf("%i ",c->m[i][j]);
		}
		printf("\n");
	}
	
	return;
}

void multiplicacion_m(M* a, M* b, M* c){
	
	if(a->c != b->f){
		printf("Liberar\n");
		c = NULL;
		free(c);
		return;
	}
	
	c->f = a->f;
	c->c = b->c;
	
	c->m = (int **)malloc(sizeof(int *)*c->f);
	
	int i,j,h,suma;
	for (i=0;i<c->f;i++){
		c->m[i] = (int *) malloc (sizeof(int)*c->c);
	}
	
	//comenzar a multiplicar
	for(i=0;i<c->f;i++){
		for(j=0;j<c->c;j++){
			suma = 0;
			for(h=0;h<c->c;h++){
				suma = suma + a->m[i][h]*b->m[h][j];
			}
			c->m[i][j] = suma;
		}
	}
	
	for(i=0;i<c->f;i++){
		for(j=0;j<c->c;j++){
			printf("%i ",c->m[i][j]);
		}
		printf("\n");
	}
	
	return;
}

void multiplicacion_c(M* a, M* c, int k){
	
	c->f = a->f;
	c->c = a->c;
	
	c->m = (int **)malloc(sizeof(int *)*c->f);
	
	int i,j;
	for (i=0;i<c->f;i++){
		c->m[i] = (int *) malloc (sizeof(int)*c->c);
	}
	
	//comenzar a multiplicar
	for(i=0;i<c->f;i++){
		for(j=0;j<c->c;j++){
			c->m[i][j] = a->m[i][j]*k;
		}
	}
	
	for(i=0;i<c->f;i++){
		for(j=0;j<c->c;j++){
			printf("%i ",c->m[i][j]);
		}
		printf("\n");
	}
	
	return;
}

void transpuesta(M* a, M* c){
	
	c->f = a->c;
	c->c = a->f;
	
	c->m = (int **)malloc(sizeof(int *)*c->f);
	
	int i,j;
	for (i=0;i<c->f;i++){
		c->m[i] = (int *) malloc (sizeof(int)*c->c);
	}
	
	//comenzar transpuesta
	for(i=0;i<c->f;i++){
		for(j=0;j<c->c;j++){
			c->m[i][j] = a->m[j][i];
		}
	}
	
	for(i=0;i<c->f;i++){
		for(j=0;j<c->c;j++){
			printf("%i ",c->m[i][j]);
		}
		printf("\n");
	}
	
	return;
}
