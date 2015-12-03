#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){

  int cantidadH,i;
  int constante;

  read(STDIN_FILENO,&cantidadH,sizeof(int));
  read(STDIN_FILENO,&constante,sizeof(int));

  int* temp = (int *)malloc(sizeof(int)*cantidadH);

  for(i=0;i<cantidadH;i++){
    read(STDIN_FILENO,&temp[i],sizeof(int)); //Se lee la matriz
  }

  int* matrizA = (int*) malloc((cantidadH)*sizeof(int));

	for (i = 2; i < cantidadH; i++) {
			matrizA[i] = temp[i]*constante;
	}

	matrizA[0] = temp[0];
	matrizA[1] = temp[1];
	//comenzar a multiplicar por constante

  cantidadH =matrizA[0]*matrizA[1]+2;

	//Enviar la matriz resultado
  write(STDOUT_FILENO,&cantidadH,sizeof(int));
  for(i =0;i<cantidadH;i++) write(STDOUT_FILENO,matrizA+i,sizeof(int));
  free(temp);
  free(matrizA);
  return 0;
}
