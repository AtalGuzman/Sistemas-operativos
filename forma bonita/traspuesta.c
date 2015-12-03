#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char * argv[]){

  int cantidadH,i,j,k;
  int* temp = malloc(sizeof(int));
  int* matrizA = (int *)malloc(sizeof(int)*2);

  read(STDIN_FILENO,&cantidadH,sizeof(int));
  read(STDIN_FILENO,temp,cantidadH*sizeof(int)); //Se lee la matriz

  matrizA = realloc(matrizA, cantidadH);

  int fila= temp[0];
  int columna = temp[1];

  /*int **matriz = (int **)malloc(sizeof(int*)*fila);
  int **matriz2 = (int **)malloc(sizeof(int*)*columna);
  for(i = 0; i<fila;i++){
    matriz[i] = (int *)malloc(sizeof(int)*columna);
  }

  for(i=0;i<columna;i++){
    matriz2[i] = (int *)malloc(sizeof(int)*fila);
  }*/

  for(i=0;i<cantidadH;i++){
    matrizA[i] =  temp[i];
  }
  //j=0;
  //k=0;
  ///////////////////////////////
  //SOLUCION
  ///////////////////////////////
  /*int ma,te;
	for(i=0;i<fila;i++){
    for(j=0;j<columna;j++){
      ma = i+(j*fila)+2;
      te = j+(i*columna)+2;
      matrizA[ma] = temp[te];
    }
  }
  for(i=2;i<cantidadH;i++){
    matriz[j][k] = temp[i];
    k++;
    if(k%(columna) == 0){
      j++;
      k=0;
    }
  }*/
  
  /*j=0;
  k=0;
  for(i=2;i<cantidadH;i++){
      matriz[j][k] = (int)temp[i];
      k++;
      if(k==columna){
        j++;
        k=0;
      }
  }*/

  //comenzar transpuesta
  /*for(i=0;i<fila;i++){
    for(j=0;j<columna;j++){
      matriz2[i][j] = matriz[j][i];
    }
  }*/

  /*matrizA[0] = fila;
  matrizA[1] = columna;

  k=2;
  for(i=0;i<fila;i++){
    for(j=0;j<columna;j++){
      matrizA[k] = (int)matriz[i][j];
      k++;
    }
  }*/

  //comenzar a multiplicar por constante

  //cantidadH = matrizA[0]*matrizA[1]+2;

  //Enviar la matriz resultado
  write(STDOUT_FILENO,&cantidadH,sizeof(int));
  for(i =0;i<cantidadH;i++) write(STDOUT_FILENO,matrizA+i,sizeof(int));
  return 0;
}
