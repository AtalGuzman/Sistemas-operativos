#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){

  int cantidadH,i,j;
//Leer la matriz 1 y matriz 2
  read(STDIN_FILENO,&cantidadH,sizeof(int));
  int* temp = (int *)malloc(sizeof(int)*cantidadH);

  for(i=0;i<cantidadH;i++){
    read(STDIN_FILENO,&temp[i],sizeof(int)); //Se lee la matriz
  }

  int* matrizA = (int *)malloc((cantidadH/2)*sizeof(int));
  int* matrizB = (int *)malloc((cantidadH/2)*sizeof(int));

  for(i=0;i<cantidadH/2;i++){
      matrizA[i] = temp[i];
      matrizB[i] = temp[i+cantidadH/2];
  }

//comenzar a multiplicar por constante
  for(i=2;i<(matrizA[0]*matrizA[1])+2;i++){
      matrizA[i] = matrizA[i]-matrizB[i];
  }
  cantidadH =matrizA[0]*matrizA[1]+2;

//Enviar la matriz resultado
  write(STDOUT_FILENO,&cantidadH,sizeof(int));
  for(i =0;i<cantidadH;i++) write(STDOUT_FILENO,matrizA+i,sizeof(int));
  free(temp);
  free(matrizA);
  free(matrizB);
  return 0;
}
