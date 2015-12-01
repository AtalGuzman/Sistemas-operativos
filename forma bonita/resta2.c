#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){

  int cantidadH,i,j;
  int* temp = malloc(sizeof(int));
  int* matrizA = malloc(sizeof(int));
  int* matrizB = malloc(sizeof(int));
//Leer la matriz 1 y matriz 2
  read(STDIN_FILENO,&cantidadH,sizeof(int));
  read(STDIN_FILENO,temp,cantidadH*sizeof(int));

  matrizA = malloc((cantidadH/2)*sizeof(int));
  matrizB = malloc((cantidadH/2)*sizeof(int));

  for(i=0;i<cantidadH/2;i++){
      matrizA[i] = temp[i];
  }
  for(j=0;j<cantidadH;j++){
    matrizB[j] = temp[j];
  }

//comenzar a multiplicar por constante
  for(i=2;i<(matrizA[0]*matrizA[1])+2;i++){
      matrizA[i] = matrizA[i]-matrizB[i];
  }
  cantidadH =matrizA[0]*matrizA[1]+2;

//Enviar la matriz resultado
  write(STDOUT_FILENO,&cantidadH,sizeof(int));
  for(i =0;i<cantidadH;i++) write(STDOUT_FILENO,matrizA+i,sizeof(int));
  return 0;
}
