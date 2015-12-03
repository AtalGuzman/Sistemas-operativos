#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "archivos.h"

#define LEER 0
#define ESCRIBIR 1

int main(int argc, char* argv[]){
	int pid, cont, bandera;
	int pipefd1[2];
	int pipefd2[2];
	//pipe(pipefd1);
	//pipe(pipefd2);
	/*Se inicializan todas las matrices en valores nulos*/
	char *intruccion = malloc(50*sizeof(char));
	int* A = malloc(sizeof(int)*2);
	int* B = malloc(sizeof(int)*2);
	int* C = malloc(sizeof(int)*2);
	int* D = malloc(sizeof(int));
	int* E = malloc(sizeof(int));
	int* F = malloc(sizeof(int));
	int* G = malloc(sizeof(int));
	int* H = malloc(sizeof(int));
	int* I = malloc(sizeof(int));
	int* J = malloc(sizeof(int));
	int* K = malloc(sizeof(int));
	int* L = malloc(sizeof(int));
	int* M = malloc(sizeof(int));
	int* N = malloc(sizeof(int));
	int* O = malloc(sizeof(int));
	int* P = malloc(sizeof(int));
	int* Q = malloc(sizeof(int));
	int* R = malloc(sizeof(int));
	int* S = malloc(sizeof(int));
	int* T = malloc(sizeof(int));
	int* U = malloc(sizeof(int));
	int* V = malloc(sizeof(int));
	int* W = malloc(sizeof(int));
	int* X = malloc(sizeof(int));
	int* Y = malloc(sizeof(int));
	int* Z = malloc(sizeof(int));

	char a,b,c;
	char *ptr;
	char *s1;
	char buffer2[255];
	char s2[5]= " \n\t";
	while(1){

		printf(">>> ");
		fgets(buffer2,50,stdin);
		if(buffer2[0]!='\0' && buffer2[0]!='\n'){
			ptr = strtok( buffer2, s2 );
		}
		if(strcmp(ptr,"load")==0){
		//Hacer un case con cada una de las matrices
		//Ahí se guarda con el parámetros de la entrada
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(A);
							A = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(B);
							B = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){

						if(verificar(ptr)) {
							free(C);
							C = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(D);
							D = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(E);
							E = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(F);
							F = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(G);
							G = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(H);
							H = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(I);
							I = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(J);
							J = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(K);
							K = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(L);
							L = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(M);
							M = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(N);
							N = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(O);
							O = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(P);
							P = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(Q);
							Q = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(R);
							R = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(S);
							S = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(T);
							T = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(U);
							U = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(V);
							V = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(W);
							W = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(X);
							X = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(Y);
							Y = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						if(verificar(ptr)) {
							free(Z);
							Z = leerMatriz(ptr);}
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: faltan parámetros \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
			}
		}
		else if(strcmp(ptr,"print")==0)
		{
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(A);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(B);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(C);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(D);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(E);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(F);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(G);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(H);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(I);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(J);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(K);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(L);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(M);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(N);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(O);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(P);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(Q);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(R);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(S);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(T);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(U);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(V);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(W);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(X);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(Y);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						mostrarMatriz(Z);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: faltan parámetros \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
			}
		}
		else if(strcmp(ptr,"save")==0)
		{
			printf("Se guardó la matriz \n");
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(A,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(B,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(C,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(D,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(E,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(F,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(G,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(H,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(I,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(J,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(K,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(L,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(M,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(N,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(O,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(P,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(Q,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(R,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(S,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(T,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(U,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(V,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(W,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(X,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(Y,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						escribirMatriz(Z,ptr);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: faltan parámetros \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");
			}
		}
		else if(strlen(ptr)==3){
			cont = 2;
			bandera = 0;
			int* copia = malloc(sizeof(int));
			while(cont>=0){
				if(ptr[cont] == 'A'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(A);
					}else{
						A = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'B'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(B);
					}else{
						B = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'C'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(C);
					}else{
						C = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'D'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(D);
					}else{
						D = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'E'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(E);
					}else{
						E = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'F'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(F);
					}else{
						F = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'G'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(G);
					}else{
						G = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'H'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(H);
					}else{
						H = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'I'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(I);
					}else{
						I = copiarMatriz(copia);
					};
				}else if(ptr[cont] == 'J'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(J);
					}else{
						J = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'K'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(K);
					}else{
						K = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'L'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(L);
					}else{
						L = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'M'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(M);
					}else{
						M = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'N'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(N);
					}else{
						N = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'O'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(O);
					}else{
						O = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'P'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(P);
					}else{
						P = copiarMatriz(copia);
					};
				}else if(ptr[cont] == 'Q'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(Q);
					}else{
						Q = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'R'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(R);
					}else{
						R = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'S'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(S);
					}else{
						S = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'T'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(T);
					}else{
						T = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'U'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(U);
					}else{
						U = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'V'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(V);
					}else{
						V = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'W'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(W);
					}else{
						W = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'X'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(X);
					}else{
						X = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'Y'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(Y);
					}else{
						Y = copiarMatriz(copia);
					}
				}else if(ptr[cont] == 'Z'){
					if(bandera == 0){
						bandera = 1;
						copia = copiarMatriz(Z);
					}else{
						Z = copiarMatriz(copia);
					}
				}
				cont =  cont - 2;
			}
			borrarMatriz(copia);
		}
		else if(strcmp(ptr,"clear")==0){
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(A);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(B);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(C);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(D);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(E);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(F);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(G);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(H);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(I);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(J);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(K);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(L);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(M);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(N);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(O);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(P);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(Q);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(R);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(S);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(T);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(U);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(V);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(W);					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(X);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(Y);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))==NULL){
						borrarMatriz(Z);
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
					}
				}
				else{
					printf("Error: El nombre de la matriz debe ser una letra mayúscula, excepto la Ñ\n");
				}
			}
			else{
				printf("Error: Falta parámetro de entrada \nUso: clear <Nombre matriz>\n");
			}
		}else if(strlen(ptr)==5){

			pipe(pipefd1);
			pipe(pipefd2);
			pid = fork();
			cont = 1;

			if (pid == 0) {
				/*int cantidadH,i,j;
				int* temp = malloc(sizeof(int));
				int* matrizA = malloc(sizeof(int));
				int* matrizB = malloc(sizeof(int));*/

				close(pipefd1[LEER]); //Solo puede escribir en pipefd1
				close(pipefd2[ESCRIBIR]); //solo puede leer en pipefd2

				dup2(pipefd1[ESCRIBIR],STDOUT_FILENO);
				dup2(pipefd2[LEER],STDIN_FILENO);
				if(ptr[3]=='+'){
					execl("suma2","ls","-al",NULL);
				}else if(ptr[3] == '-'){
					execl("resta2","ls","-al",NULL);
				}else if(ptr[3] == '*'){
					execl("multiplicacion2","ls","-al",NULL);
				}else if(ptr[3] == '*'){
					execl("traspuesta","ls","-al",NULL);
				}
				/*free(matrizA);
				free(matrizB);
				free(temp);*/
			}else {
				close(pipefd1[ESCRIBIR]); //solo puede leer en pipefd1
				close(pipefd2[LEER]); //solo puede escribir en pipefd2
				int * temp;
				int cantidad = 0;
				int k,l;
				cont = 2;
				bandera = 0;
				while(cont<5){

					if(ptr[cont] == 'A'){
						if(bandera == 0){
							cantidad = cantidad + A[0]*A[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (A[0]*A[1]+2); k++) {
								temp[k]=A[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=A[k-l];
							}
						}
					}else if(ptr[cont] == 'B'){
						if(bandera == 0){
							cantidad = cantidad + B[0]*B[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (B[0]*B[1]+2); k++) {
								temp[k]=B[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=B[k-l];
							}
						}
					}else if(ptr[cont] == 'C'){
						if(bandera == 0){
							cantidad = cantidad + C[0]*C[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (C[0]*C[1]+2); k++) {
								temp[k]=C[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=C[k-l];
							}
						}
					}else if(ptr[cont] == 'D'){
						if(bandera == 0){
							cantidad = cantidad + D[0]*D[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (D[0]*D[1]+2); k++) {
								temp[k]=D[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=D[k-l];
							}
						}
					}else if(ptr[cont] == 'E'){
						if(bandera == 0){
							cantidad = cantidad + E[0]*E[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (E[0]*E[1]+2); k++) {
								temp[k]=E[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=E[k-l];
							}
						}
					}else if(ptr[cont] == 'F'){
						if(bandera == 0){
							cantidad = cantidad + F[0]*F[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (F[0]*F[1]+2); k++) {
								temp[k]=F[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=F[k-l];
							}
						}
					}else if(ptr[cont] == 'G'){
						if(bandera == 0){
							cantidad = cantidad + G[0]*G[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (G[0]*G[1]+2); k++) {
								temp[k]=G[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=G[k-l];
							}
						}
					}else if(ptr[cont] == 'H'){
						if(bandera == 0){
							cantidad = cantidad + H[0]*H[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (H[0]*H[1]+2); k++) {
								temp[k]=H[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=H[k-l];
							}
						}
					}else if(ptr[cont] == 'I'){
						if(bandera == 0){
							cantidad = cantidad + I[0]*I[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (I[0]*I[1]+2); k++) {
								temp[k]=I[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=I[k-l];
							}
						}
					}else if(ptr[cont] == 'J'){
						if(bandera == 0){
							cantidad = cantidad + J[0]*J[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (J[0]*J[1]+2); k++) {
								temp[k]=J[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=J[k-l];
							}
						}
					}else if(ptr[cont] == 'K'){
						if(bandera == 0){
							cantidad = cantidad + K[0]*K[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (K[0]*K[1]+2); k++) {
								temp[k]=K[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=K[k-l];
							}
						}
					}else if(ptr[cont] == 'L'){
						if(bandera == 0){
							cantidad = cantidad + L[0]*L[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (L[0]*L[1]+2); k++) {
								temp[k]=L[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=L[k-l];
							}
						}
					}else if(ptr[cont] == 'M'){
						if(bandera == 0){
							cantidad = cantidad + M[0]*M[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (M[0]*M[1]+2); k++) {
								temp[k]=M[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=M[k-l];
							}
						}
					}else if(ptr[cont] == 'N'){
						if(bandera == 0){
							cantidad = cantidad + N[0]*N[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (N[0]*N[1]+2); k++) {
								temp[k]=N[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=N[k-l];
							}
						}
					}else if(ptr[cont] == 'O'){
						if(bandera == 0){
							cantidad = cantidad + O[0]*O[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (O[0]*O[1]+2); k++) {
								temp[k]=O[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=O[k-l];
							}
						}
					}else if(ptr[cont] == 'P'){
						if(bandera == 0){
							cantidad = cantidad + P[0]*P[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (P[0]*P[1]+2); k++) {
								temp[k]=P[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=P[k-l];
							}
						}
					}else if(ptr[cont] == 'Q'){
						if(bandera == 0){
							cantidad = cantidad + Q[0]*Q[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (Q[0]*Q[1]+2); k++) {
								temp[k]=Q[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=Q[k-l];
							}
						}
					}else if(ptr[cont] == 'R'){
						if(bandera == 0){
							cantidad = cantidad + R[0]*R[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (R[0]*R[1]+2); k++) {
								temp[k]=R[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=R[k-l];
							}
						}
					}else if(ptr[cont] == 'S'){
						if(bandera == 0){
							cantidad = cantidad + S[0]*S[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (S[0]*S[1]+2); k++) {
								temp[k]=S[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=S[k-l];
							}
						}
					}else if(ptr[cont] == 'T'){
						if(bandera == 0){
							cantidad = cantidad + T[0]*T[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (T[0]*T[1]+2); k++) {
								temp[k]=T[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=T[k-l];
							}
						}
					}else if(ptr[cont] == 'U'){
						if(bandera == 0){
							cantidad = cantidad + U[0]*U[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (U[0]*U[1]+2); k++) {
								temp[k]=U[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=U[k-l];
							}
						}
					}else if(ptr[cont] == 'V'){
						if(bandera == 0){
							cantidad = cantidad + V[0]*V[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (V[0]*V[1]+2); k++) {
								temp[k]=V[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=V[k-l];
							}
						}
					}else if(ptr[cont] == 'W'){
						if(bandera == 0){
							cantidad = cantidad + W[0]*W[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (W[0]*W[1]+2); k++) {
								temp[k]=W[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=W[k-l];
							}
						}
					}else if(ptr[cont] == 'X'){
						if(bandera == 0){
							cantidad = cantidad + X[0]*X[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (X[0]*X[1]+2); k++) {
								temp[k]=X[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=X[k-l];
							}
						}
					}else if(ptr[cont] == 'Y'){
						if(bandera == 0){
							cantidad = cantidad + Y[0]*Y[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (Y[0]*Y[1]+2); k++) {
								temp[k]=Y[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=Y[k-l];
							}
						}
					}else if(ptr[cont] == 'Z'){
						if(bandera == 0){
							cantidad = cantidad + Z[0]*Z[1]+2;
						}else if(cont == 2){
							for ( k = 0; k < (Z[0]*Z[1]+2); k++) {
								temp[k]=Z[k];
							}
						}else if(cont == 4){
							l = temp[0]*temp[1]+2;
							for ( k = l; k < cantidad; k++) {
								temp[k]=Z[k-l];
							}
						}
					}
					cont = cont + 2;
					if(cont == 6 && bandera == 0){
						bandera = 1;
						cont = 2;
						temp = malloc(sizeof(int)*cantidad);
					}
				}
				//agregar validaciones de tamaño
				//Escribir la matriz 1 y matriz 2
				write(pipefd2[ESCRIBIR],&cantidad,sizeof(int));

				for(k=0;k<cantidad;k++){
					write(pipefd2[ESCRIBIR],&temp[k],sizeof(int));
				}
				//Leer la matriz resultado
				read(pipefd1[LEER],&cantidad,sizeof(int));
				
				cont = 0;
				if(ptr[cont] == 'A'){
					A = (int*) malloc(sizeof(int)*cantidad);
					free(A);
					int* A = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],A+k,sizeof(int));
				}else if(ptr[cont] == 'B'){
					B = (int*) malloc(sizeof(int)*cantidad);
					free(B);
					int* B = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],B+k,sizeof(int));
				}else if(ptr[cont] == 'C'){
					C = (int*) malloc(sizeof(int)*cantidad);
					free(C);
					int* C = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],C+k,sizeof(int));
				}else if(ptr[cont] == 'D'){
					D = (int*) malloc(sizeof(int)*cantidad);
					free(D);
					int* D = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],D+k,sizeof(int));
				}else if(ptr[cont] == 'E'){
					E = (int*) malloc(sizeof(int)*cantidad);
					free(E);
					int* E = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],E+k,sizeof(int));
				}else if(ptr[cont] == 'F'){
					F = (int*) malloc(sizeof(int)*cantidad);
					free(F);
					int* F = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],F+k,sizeof(int));
				}else if(ptr[cont] == 'G'){
					G = (int*) malloc(sizeof(int)*cantidad);
					free(G);
					int* G = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],G+k,sizeof(int));
				}else if(ptr[cont] == 'H'){
					H = (int*) malloc(sizeof(int)*cantidad);
					free(H);
					int* H = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],H+k,sizeof(int));
				}else if(ptr[cont] == 'I'){
					I = (int*) malloc(sizeof(int)*cantidad);
					free(I);
					int* I = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],I+k,sizeof(int));
				}else if(ptr[cont] == 'J'){
					J = (int*) malloc(sizeof(int)*cantidad);
					free(J);
					int* J = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],J+k,sizeof(int));
				}else if(ptr[cont] == 'K'){
					K = (int*) malloc(sizeof(int)*cantidad);
					free(K);
					int* K = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],K+k,sizeof(int));
				}else if(ptr[cont] == 'L'){
					L = (int*) malloc(sizeof(int)*cantidad);
					free(L);
					int* L = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],L+k,sizeof(int));
				}else if(ptr[cont] == 'M'){
					M = (int*) malloc(sizeof(int)*cantidad);
					free(M);
					int* M = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],M+k,sizeof(int));
				}else if(ptr[cont] == 'N'){
					N = (int*) malloc(sizeof(int)*cantidad);
					free(N);
					int* N = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],N+k,sizeof(int));
				}else if(ptr[cont] == 'O'){
					O = (int*) malloc(sizeof(int)*cantidad);
					free(O);
					int* O = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],O+k,sizeof(int));
				}else if(ptr[cont] == 'P'){
					P = (int*) malloc(sizeof(int)*cantidad);
					free(P);
					int* P = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],P+k,sizeof(int));
				}else if(ptr[cont] == 'Q'){
					Q = (int*) malloc(sizeof(int)*cantidad);
					free(Q);
					int* Q = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],Q+k,sizeof(int));
				}else if(ptr[cont] == 'R'){
					R = (int*) malloc(sizeof(int)*cantidad);
					free(R);
					int* R = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],R+k,sizeof(int));
				}else if(ptr[cont] == 'S'){
					S = (int*) malloc(sizeof(int)*cantidad);
					free(S);
					int* S = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],S+k,sizeof(int));
				}else if(ptr[cont] == 'T'){
					T = (int*) malloc(sizeof(int)*cantidad);
					free(T);
					int* T = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],T+k,sizeof(int));
				}else if(ptr[cont] == 'U'){
					U = (int*) malloc(sizeof(int)*cantidad);
					free(U);
					int* U = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],U+k,sizeof(int));
				}else if(ptr[cont] == 'V'){
					V = (int*) malloc(sizeof(int)*cantidad);
					free(V);
					int* V = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],V+k,sizeof(int));
				}else if(ptr[cont] == 'W'){
					W = (int*) malloc(sizeof(int)*cantidad);
					free(W);
					int* W = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],W+k,sizeof(int));
				}else if(ptr[cont] == 'X'){
					X = (int*) malloc(sizeof(int)*cantidad);
					free(X);
					int* X = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],X+k,sizeof(int));
				}else if(ptr[cont] == 'Y'){
					Y = (int*) malloc(sizeof(int)*cantidad);
					free(Y);
					int* Y = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],Y+k,sizeof(int));
				}else if(ptr[cont] == 'Z'){
					Z = (int*) malloc(sizeof(int)*cantidad);
					free(Z);
					int* Z = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],Z+k,sizeof(int));
				}

				free(temp);
			}
		
		}else if(strlen(buffer2)==7 && buffer2[1] == '=' && buffer2[2] == 't' && buffer2[3] == 'r' && buffer2[4] == 'a' && buffer2[5] == 'n' && buffer2[6] == 's'){
			
			pipe(pipefd1);
			pipe(pipefd2);
			pid = fork();
			cont = 1;

			if (pid == 0) {

				close(pipefd1[LEER]); //Solo puede escribir en pipefd1
				close(pipefd2[ESCRIBIR]); //solo puede leer en pipefd2

				dup2(pipefd1[ESCRIBIR],STDOUT_FILENO);
				dup2(pipefd2[LEER],STDIN_FILENO);
				execl("traspuesta","ls","-all",NULL);

			}else{
				close(pipefd1[ESCRIBIR]); //solo puede leer en pipefd1
				close(pipefd2[LEER]); //solo puede escribir en pipefd2
				int * temp;
				int cantidad = 0;
				int k,l;
				cont = 8;
				bandera = 0;
				while(cont==8){

					if(ptr[cont] == 'A'){
						if(bandera == 0){
							cantidad = cantidad + A[0]*A[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=A[k];
							}
						}
					}else if(ptr[cont] == 'B'){
						if(bandera == 0){
							cantidad = cantidad + B[0]*B[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=B[k];
							}
						}
					}else if(ptr[cont] == 'C'){
						if(bandera == 0){
							cantidad = cantidad + C[0]*C[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=C[k];
							}
						}
					}else if(ptr[cont] == 'D'){
						if(bandera == 0){
							cantidad = cantidad + D[0]*D[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=D[k];
							}
						}
					}else if(ptr[cont] == 'E'){
						if(bandera == 0){
							cantidad = cantidad + E[0]*E[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=E[k];
							}
						}
					}else if(ptr[cont] == 'F'){
						if(bandera == 0){
							cantidad = cantidad + F[0]*F[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=F[k];
							}
						}
					}else if(ptr[cont] == 'G'){
						if(bandera == 0){
							cantidad = cantidad + G[0]*G[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=G[k];
							}
						}
					}else if(ptr[cont] == 'H'){
						if(bandera == 0){
							cantidad = cantidad + H[0]*H[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=H[k];
							}
						}
					}else if(ptr[cont] == 'I'){
						if(bandera == 0){
							cantidad = cantidad + I[0]*I[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=I[k];
							}
						}
					}else if(ptr[cont] == 'J'){
						if(bandera == 0){
							cantidad = cantidad + J[0]*J[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=J[k];
							}
						}
					}else if(ptr[cont] == 'K'){
						if(bandera == 0){
							cantidad = cantidad + K[0]*K[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=K[k];
							}
						}
					}else if(ptr[cont] == 'L'){
						if(bandera == 0){
							cantidad = cantidad + L[0]*L[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=L[k];
							}
						}
					}else if(ptr[cont] == 'M'){
						if(bandera == 0){
							cantidad = cantidad + M[0]*M[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=M[k];
							}
						}
					}else if(ptr[cont] == 'N'){
						if(bandera == 0){
							cantidad = cantidad + N[0]*N[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=N[k];
							}
						}
					}else if(ptr[cont] == 'O'){
						if(bandera == 0){
							cantidad = cantidad + O[0]*O[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=O[k];
							}
						}
					}else if(ptr[cont] == 'P'){
						if(bandera == 0){
							cantidad = cantidad + P[0]*P[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=P[k];
							}
						}
					}else if(ptr[cont] == 'Q'){
						if(bandera == 0){
							cantidad = cantidad + Q[0]*Q[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=Q[k];
							}
						}
					}else if(ptr[cont] == 'R'){
						if(bandera == 0){
							cantidad = cantidad + R[0]*R[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=R[k];
							}
						}
					}else if(ptr[cont] == 'S'){
						if(bandera == 0){
							cantidad = cantidad + S[0]*S[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=S[k];
							}
						}
					}else if(ptr[cont] == 'T'){
						if(bandera == 0){
							cantidad = cantidad + T[0]*T[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=T[k];
							}
						}
					}else if(ptr[cont] == 'U'){
						if(bandera == 0){
							cantidad = cantidad + U[0]*U[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=U[k];
							}
						}
					}else if(ptr[cont] == 'V'){
						if(bandera == 0){
							cantidad = cantidad + V[0]*V[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=V[k];
							}
						}
					}else if(ptr[cont] == 'W'){
						if(bandera == 0){
							cantidad = cantidad + W[0]*W[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=W[k];
							}
						}
					}else if(ptr[cont] == 'X'){
						if(bandera == 0){
							cantidad = cantidad + X[0]*X[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=X[k];
							}
						}
					}else if(ptr[cont] == 'Y'){
						if(bandera == 0){
							cantidad = cantidad + Y[0]*Y[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=Y[k];
							}
						}
					}else if(ptr[cont] == 'Z'){
						if(bandera == 0){
							cantidad = cantidad + Z[0]*Z[1]+2;
						}else{
							for ( k = 0; k < cantidad; k++) {
								temp[k]=Z[k];
							}
						}
					}
					cont = cont + 1;
					if(cont == 9 && bandera == 0){
						bandera = 1;
						cont = 8;
						temp = malloc(sizeof(int)*cantidad);
					}
				}
				//agregar validaciones de tamaño
				//Escribir la matriz 1 y matriz 2
				write(pipefd2[ESCRIBIR],&cantidad,sizeof(int));

				for(k=0;k<cantidad;k++){
					write(pipefd2[ESCRIBIR],&temp[k],sizeof(int));
				}
				//Leer la matriz resultado
				read(pipefd1[LEER],&cantidad,sizeof(int));
				
				cont = 0;
				if(ptr[cont] == 'A'){
					A = (int*) malloc(sizeof(int)*cantidad);
					free(A);
					int* A = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],A+k,sizeof(int));
				}else if(ptr[cont] == 'B'){
					B = (int*) malloc(sizeof(int)*cantidad);
					free(B);
					int* B = (int*) malloc(sizeof(int)*cantidad);
					for(k=0;k<cantidad;k++) read(pipefd1[LEER],B+k,sizeof(int));
				}else if(ptr[cont] == 'C'){
					C = (int*) malloc(sizeof(int)*cantidad);
					free(C);
					int* C = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],C+k,sizeof(int));
				}else if(ptr[cont] == 'D'){
					D = (int*) malloc(sizeof(int)*cantidad);
					free(D);
					int* D = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],D+k,sizeof(int));
				}else if(ptr[cont] == 'E'){
					E = (int*) malloc(sizeof(int)*cantidad);
					free(E);
					int* E = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],E+k,sizeof(int));
				}else if(ptr[cont] == 'F'){
					F = (int*) malloc(sizeof(int)*cantidad);
					free(F);
					int* F = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],F+k,sizeof(int));
				}else if(ptr[cont] == 'G'){
					G = (int*) malloc(sizeof(int)*cantidad);
					free(G);
					int* G = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],G+k,sizeof(int));
				}else if(ptr[cont] == 'H'){
					H = (int*) malloc(sizeof(int)*cantidad);
					free(H);
					int* H = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],H+k,sizeof(int));
				}else if(ptr[cont] == 'I'){
					I = (int*) malloc(sizeof(int)*cantidad);
					free(I);
					int* I = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],I+k,sizeof(int));
				}else if(ptr[cont] == 'J'){
					J = (int*) malloc(sizeof(int)*cantidad);
					free(J);
					int* J = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],J+k,sizeof(int));
				}else if(ptr[cont] == 'K'){
					K = (int*) malloc(sizeof(int)*cantidad);
					free(K);
					int* K = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],K+k,sizeof(int));
				}else if(ptr[cont] == 'L'){
					L = (int*) malloc(sizeof(int)*cantidad);
					free(L);
					int* L = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],L+k,sizeof(int));
				}else if(ptr[cont] == 'M'){
					M = (int*) malloc(sizeof(int)*cantidad);
					free(M);
					int* M = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],M+k,sizeof(int));
				}else if(ptr[cont] == 'N'){
					N = (int*) malloc(sizeof(int)*cantidad);
					free(N);
					int* N = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],N+k,sizeof(int));
				}else if(ptr[cont] == 'O'){
					O = (int*) malloc(sizeof(int)*cantidad);
					free(O);
					int* O = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],O+k,sizeof(int));
				}else if(ptr[cont] == 'P'){
					P = (int*) malloc(sizeof(int)*cantidad);
					free(P);
					int* P = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],P+k,sizeof(int));
				}else if(ptr[cont] == 'Q'){
					Q = (int*) malloc(sizeof(int)*cantidad);
					free(Q);
					int* Q = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],Q+k,sizeof(int));
				}else if(ptr[cont] == 'R'){
					R = (int*) malloc(sizeof(int)*cantidad);
					free(R);
					int* R = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],R+k,sizeof(int));
				}else if(ptr[cont] == 'S'){
					S = (int*) malloc(sizeof(int)*cantidad);
					free(S);
					int* S = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],S+k,sizeof(int));
				}else if(ptr[cont] == 'T'){
					T = (int*) malloc(sizeof(int)*cantidad);
					free(T);
					int* T = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],T+k,sizeof(int));
				}else if(ptr[cont] == 'U'){
					U = (int*) malloc(sizeof(int)*cantidad);
					free(U);
					int* U = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],U+k,sizeof(int));
				}else if(ptr[cont] == 'V'){
					V = (int*) malloc(sizeof(int)*cantidad);
					free(V);
					int* V = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],V+k,sizeof(int));
				}else if(ptr[cont] == 'W'){
					W = (int*) malloc(sizeof(int)*cantidad);
					free(W);
					int* W = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],W+k,sizeof(int));
				}else if(ptr[cont] == 'X'){
					X = (int*) malloc(sizeof(int)*cantidad);
					free(X);
					int* X = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],X+k,sizeof(int));
				}else if(ptr[cont] == 'Y'){
					Y = (int*) malloc(sizeof(int)*cantidad);
					free(Y);
					int* Y = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],Y+k,sizeof(int));
				}else if(ptr[cont] == 'Z'){
					Z = (int*) malloc(sizeof(int)*cantidad);
					free(Z);
					int* Z = (int*) malloc(sizeof(int)*cantidad);
					for(k =0;k<cantidad;k++) read(pipefd1[LEER],Z+k,sizeof(int));
				}

				free(temp);
			}
		
		}else if (strcmp(ptr,"exit")==0){
			printf("Bye!\n");

			borrarMatriz(A);
			borrarMatriz(B);
			borrarMatriz(C);
			borrarMatriz(D);
			borrarMatriz(E);
			borrarMatriz(F);
			borrarMatriz(G);
			borrarMatriz(H);
			borrarMatriz(I);
			borrarMatriz(J);
			borrarMatriz(K);
			borrarMatriz(L);
			borrarMatriz(M);
			borrarMatriz(N);
			borrarMatriz(O);
			borrarMatriz(P);
			borrarMatriz(Q);
			borrarMatriz(R);
			borrarMatriz(S);
			borrarMatriz(T);
			borrarMatriz(U);
			borrarMatriz(V);
			borrarMatriz(W);
			borrarMatriz(X);
			borrarMatriz(Y);
			borrarMatriz(Z);
			return 0;
		}
	}
	return 0;
}
