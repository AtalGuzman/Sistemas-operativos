#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct matriz {
   int f;
   int c;
   int** m;
}M;

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

