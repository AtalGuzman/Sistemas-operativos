#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "struct.h"
#include "archivos.h"
#define LEER 0
#define ESCRIBIR 1

int main(int argc, char *argv[]){
  int pipefd1[2];
  int pipefd2[2];
  int pid;
  int *A= malloc(sizeof(int));
  int *B= malloc(sizeof(int));
  //int *C = malloc(sizeof(int));
  //int *D= malloc(sizeof(int));
  //int *r = malloc(sizeof(int));
  //int *resultado = malloc(sizeof(int));
  A = leerMatriz("H");
  B = leerMatriz("H");

  pipe(pipefd2);
  pipe(pipefd1);

  pid = fork();

  if (pid == 0) {
      int cantidadH,i,j;
      int* temp = malloc(sizeof(int));
      int* matrizA = malloc(sizeof(int));
      int* matrizB = malloc(sizeof(int));

      close(pipefd1[LEER]); //Solo puede escribir en pipefd1
      close(pipefd2[ESCRIBIR]); //solo puede leer en pipefd2

      dup2(pipefd1[ESCRIBIR],STDOUT_FILENO);
      dup2(pipefd2[LEER],STDIN_FILENO);
      execl("suma2","ls","-al",NULL);
  }
  else {
      close(pipefd1[ESCRIBIR]); //solo puede leer en pipefd1
      close(pipefd2[LEER]); //solo puede escribir en pipefd2
      int cantidad = A[0]*A[1]+2+B[0]*B[1]+2;
      int k,l;
      int * temp = malloc(sizeof(k));
      for ( k = 0; k < cantidad/2; k++) {
            temp[k]=A[k];
      }
      for ( l = k; l < cantidad; l++) {
            temp[l]=B[l-k];
      }
//agregar validaciones de tamaño
//Escribir la matriz 1 y matriz 2
      write(pipefd2[ESCRIBIR],&cantidad,sizeof(int));
      write(pipefd2[ESCRIBIR],temp,cantidad*sizeof(int));

//Leer la matriz resultado
      read(pipefd1[LEER],&cantidad,sizeof(int));
      for(k =0;k<cantidad;k++) read(pipefd1[LEER],B+k,sizeof(int));

      mostrarMatriz(B);
  }
  mostrarMatriz(B);
  return 0;
}
