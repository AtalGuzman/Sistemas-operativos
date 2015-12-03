#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char * argv[]){

  int cantidadH,i,j,k;

  read(STDIN_FILENO,&cantidadH,sizeof(int));
  int* temp = (int *)malloc(sizeof(int)*cantidadH);

  for(i=0;i<cantidadH;i++){
    read(STDIN_FILENO,&temp[i],sizeof(int)); //Se lee la matriz
  }

  int* matrizA = (int*) malloc((cantidadH)*sizeof(int));

  int fila= temp[0];
  int columna = temp[1];
  j=0;
  k=0;
  ///////////////////////////////
  //SOLUCION
  ///////////////////////////////
  int ma,te;
	for(i=0;i<fila;i++){
    for(j=0;j<columna;j++){
      ma = i+(j*fila)+2;
      te = j+(i*columna)+2;
      matrizA[ma] = temp[te];
    }
  }
  

  matrizA[0] = columna;
  matrizA[1] = fila;

  //Enviar la matriz resultado
  write(STDOUT_FILENO,&cantidadH,sizeof(int));

  for(i =0;i<cantidadH;i++) write(STDOUT_FILENO,matrizA+i,sizeof(int));
  free(temp);
  free(matrizA);
  return 0;
}
