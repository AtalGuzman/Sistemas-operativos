#ifndef __ARCHIVOS_H__
#define __ARCHIVOS_H__

Mat* leerMatriz(char* entrada);
void escribirMatriz(Mat* matriz, char* nombre);
void mostrarMatriz(Mat* matriz);
void borrarMatriz(Mat** matriz);
Mat* crearMatriz(int lineaN,int lineaM,int** columna);
#endif
