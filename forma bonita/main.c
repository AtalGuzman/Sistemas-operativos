#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "struct.h"
#include "archivos.h"

#define LEER 0
#define ESCRIBIR 1

int main(int argc, char* argv[]){
	int pid;
	int pipefd1[2];
	int pipefd2[2];
	//pipe(pipefd1);
	//pipe(pipefd2);
	/*Se inicializan todas las matrices en valores nulos*/
	char *intruccion = malloc(50*sizeof(char));
	int* A = malloc(sizeof(int));
	int* B =malloc(sizeof(int));
	int* C = malloc(sizeof(int));
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
		}
		else if(strcmp(ptr,"suma")==0){
			if(A[0]!=B[0] || A[1]!=B[1]){
				printf("Error: Las matrices deben ser de las mismas dimensiones\n");
			}
			else{
			  pipe(pipefd1);
			  pipe(pipefd2);
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
			      free(matrizA);
				  free(matrizB);
				  free(temp);
			  }
			  else {
			      close(pipefd1[ESCRIBIR]); //solo puede leer en pipefd1
			      close(pipefd2[LEER]); //solo puede escribir en pipefd2
			      int cantidad = A[0]*A[1]+2+B[0]*B[1]+2;
			      int k,l;
			      int * temp = malloc(sizeof(int)*cantidad);
			      for ( k = 0; k < cantidad/2; k++) {
			            temp[k]=A[k];
			      }
			      for ( l = k; l < cantidad; l++) {
			            temp[l]=B[l-k];
			      }
			//agregar validaciones de tamaño
			//Escribir la matriz 1 y matriz 2
			      write(pipefd2[ESCRIBIR],&cantidad,sizeof(int));
			      write(pipefd2[ESCRIBIR],temp,sizeof(int)*cantidad);
			//Leer la matriz resultado
			      read(pipefd1[LEER],&cantidad,sizeof(int));
			      int* solucion = (int*) malloc(sizeof(int)*cantidad);
						//B = (int*)realloc(B,cantidad);
			      for(k =0;k<cantidad;k++) read(pipefd1[LEER],solucion+k,sizeof(int));

			      mostrarMatriz(solucion);
			  	}
			}
		}
		else if (strcmp(ptr,"exit")==0){
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
