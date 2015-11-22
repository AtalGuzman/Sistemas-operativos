#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct matriz {
   int f;
   int c;
   int** m;
}M;

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
