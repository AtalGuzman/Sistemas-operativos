#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){

  int cantidadH,i,j,h,suma;
  int* temp = malloc(sizeof(int));
  int* matrizA = malloc(sizeof(int));
  int* matrizB = malloc(sizeof(int));
  int* temp2 = malloc(sizeof(int));
//Leer la matriz 1 y matriz 2
  read(STDIN_FILENO,&cantidadH,sizeof(int));

  read(STDIN_FILENO,temp,cantidadH*sizeof(int));
  matrizA = malloc((cantidadH/2)*sizeof(int));
  matrizB = malloc((cantidadH/2)*sizeof(int));
  temp2 = malloc(matrizA[0]*matrizB[1]*sizeof(int));

  for(i=0;i<cantidadH/2;i++){
      matrizA[i] = temp[i];
      matrizB[i] = temp[i+cantidadH/2];
  }

  temp2[0] = matrizA[0];
  temp2[1] = matrizB[1];
  for(i=0;i<matrizA[0];i++){
    for(j=0;j<matrizA[1];j++){
      suma = 0;
      for(h=0;h<matrizA[1];h++){
        suma = suma + matrizA[h+i*matrizA[0]+2]*matrizB[j+h*matrizB[0]+2];
      }
      temp2[j+i*matrizA[0]+2] = suma;
    }
  }
  cantidadH =matrizA[0]*matrizB[1]+2;

//Enviar la matriz resultado
  write(STDOUT_FILENO,&cantidadH,sizeof(int));
  for(i =0;i<cantidadH;i++) write(STDOUT_FILENO,temp2+i,sizeof(int));
  return 0;
}
