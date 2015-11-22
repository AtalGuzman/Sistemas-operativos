#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "archivos.h"
#include "funciones.h"

main(int argc, char* argv[]){

	M* matriz=leerMatriz(argv[1]);

	escribirMatriz(matriz,"G");

	M* matriz2=leerMatriz("G");
	mostrarMatriz(matriz2);
	return 0;
}
