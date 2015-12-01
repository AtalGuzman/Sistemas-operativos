#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "struct.h"
#include "archivos.h"

//RECIBE DOS PUNTEROS A MATRICES QUE SON LOS OPERANDOS
// Y UN TERCERO QUE CONTENDRÁ EL RESULTADOS
Mat* suma(Mat* a, Mat* b){
	
	
	Mat * c = malloc(sizeof(Mat *));
	if((a->f != b->f) || (a->c != b->c)){

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

	return c;
}

int main(int argc, char *argv[]) {
	int numero;
	int numero2;
	read(STDIN_FILENO,&numero,sizeof(int));
	read(STDIN_FILENO,&numero2,sizeof(int));
	numero = numero+numero2;
	write(STDOUT_FILENO,&numero,sizeof(int));
	return 0;
}

