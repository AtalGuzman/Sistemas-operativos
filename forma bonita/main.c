#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "archivos.h"
#include "funciones.h"

int main(int argc, char* argv[]){

	/*Se inicializan todas las matrices en valores nulos*/
	Mat* A = crearMatriz(0,0,NULL);
	Mat* B = crearMatriz(0,0,NULL);
	Mat* C = crearMatriz(0,0,NULL);
	Mat* D = crearMatriz(0,0,NULL);
	Mat* E = crearMatriz(0,0,NULL);
	Mat* F = crearMatriz(0,0,NULL);
	Mat* G = crearMatriz(0,0,NULL);
	Mat* H = crearMatriz(0,0,NULL);
	Mat* I = crearMatriz(0,0,NULL);
	Mat* J = crearMatriz(0,0,NULL);
	Mat* K = crearMatriz(0,0,NULL);
	Mat* L = crearMatriz(0,0,NULL);
	Mat* M = crearMatriz(0,0,NULL);
	Mat* N = crearMatriz(0,0,NULL);
	Mat* O = crearMatriz(0,0,NULL);
	Mat* P = crearMatriz(0,0,NULL);
	Mat* Q = crearMatriz(0,0,NULL);
	Mat* R = crearMatriz(0,0,NULL);
	Mat* S = crearMatriz(0,0,NULL);
	Mat* T = crearMatriz(0,0,NULL);
	Mat* U = crearMatriz(0,0,NULL);
	Mat* V = crearMatriz(0,0,NULL);
	Mat* W = crearMatriz(0,0,NULL);
	Mat* X = crearMatriz(0,0,NULL);
	Mat* Y = crearMatriz(0,0,NULL);
	Mat* Z = crearMatriz(0,0,NULL);
	
	char *ptr;
	char *param1;
	char *param2;
	char *param3;
	char *s1; 
	char buffer2[255]; 
	char s2[5]= " \n\t";
	while(strcmp(s1,"exit")!=0){
		fgets(s1,50,stdin);
		ptr = strtok( s1, s2 );   
		if(strcmp(ptr,"load")==0)
		{
		//Hacer un case con cada una de las matrices
		//Ahí se guarda con el parámetros de la entrada
			if((ptr = strtok(NULL," \n"))!=NULL){
				if(strcmp(ptr,"A")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						A = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"B")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						B = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"C")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						C = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"D")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						D = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"E")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						E = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"F")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						F = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"G")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						G = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"H")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						H = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"I")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						I = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"J")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						J = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"K")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						K = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"L")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						L = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"M")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						M = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"N")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						N = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"O")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						C = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"P")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						P = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}				
				}
				else if(strcmp(ptr,"Q")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						Q = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"R")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						R = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"S")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						S = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}			
				else if(strcmp(ptr,"T")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						T = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"U")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						U = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"V")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						V = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"W")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						W = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"X")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						X = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"Y")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						Y = leerMatriz(ptr);					
					}
					else{
						printf("Error: Falta parámetro de entrada \nUso: load <Nombre matriz> <Nombre archivo>.txt\n");				
					}
				}
				else if(strcmp(ptr,"Z")==0){
					if((ptr = strtok(NULL," \n"))!=NULL){
						Z = leerMatriz(ptr);					
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
		else if(strcmp(s1,"print")==0)
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
		else if(strcmp(s1,"save")==0)
		{
			printf("Se guardó la matriz \n");
			//escribirMatriz(B,"E");		
		}
	}
	printf("Bye!\n");
	borrarMatriz(&A);
	borrarMatriz(&B);
	borrarMatriz(&C);
	borrarMatriz(&D);
	borrarMatriz(&E);
	borrarMatriz(&F);
	borrarMatriz(&G);
	borrarMatriz(&H);
	borrarMatriz(&I);
	borrarMatriz(&J);
	borrarMatriz(&K);
	borrarMatriz(&L);
	borrarMatriz(&M);
	borrarMatriz(&N);
	borrarMatriz(&O);
	borrarMatriz(&P);
	borrarMatriz(&Q);
	borrarMatriz(&R);
	borrarMatriz(&S);
	borrarMatriz(&T);
	borrarMatriz(&U);
	borrarMatriz(&V);
	borrarMatriz(&W);
	borrarMatriz(&X);
	borrarMatriz(&Y);
	borrarMatriz(&Z);
	return 0;
}
