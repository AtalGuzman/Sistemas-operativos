#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){

  int cantidadH,i,j,k;
  int* temp = malloc(sizeof(int));
  int constante;
  int* matrizA = malloc(sizeof(int));

  read(STDIN_FILENO,&cantidadH,sizeof(int));
  read(STDIN_FILENO,&constante,sizeof(int));
  read(STDIN_FILENO,temp,cantidadH*sizeof(int)); //Se lee la matriz
  matrizA = malloc((cantidadH)*sizeof(int));

  //int fila= temp[0];
  //int columna = temp[1];

  /*int **matriz = malloc(sizeof(int*)*fila);
  int **matriz2 = malloc(sizeof(int*)*fila);
  for(i = 0; i<fila;i++){
    matriz[i] = malloc(sizeof(int)*columna);
    matriz2[i] = malloc(sizeof(int)*columna);
  }*/

  /*j=0;
  k=0;*/
	for(i=2;i<fila;i++){
      matrizA[i] = temp[i]*constante;
  }
  
  matrizA[0] = temp[0];
  matrizA[1] = temp[1];
  //comenzar a multiplicar por constante

  cantidadH =matrizA[0]*matrizA[1]+2;

  //Enviar la matriz resultado
  write(STDOUT_FILENO,&cantidadH,sizeof(int));
  for(i =0;i<cantidadH;i++) write(STDOUT_FILENO,matrizA+i,sizeof(int));
  return 0;
}