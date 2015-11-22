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
