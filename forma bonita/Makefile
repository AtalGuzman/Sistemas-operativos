#Este es un archivo de ejemplo para compilar la lista
BIN               := main
CC                := gcc
LINKER            := gcc
C_SOURCES         := main.c archivos.c
C_OBJS            := main.o archivos.o
C_FLAGS           := -c

all: $(C_OBJS)
	$(CC) -o $(BIN) $(C_OBJS)
	gcc suma2.c -o suma2
	gcc resta2.c -o resta2
	gcc multiplicacion2_c.c -o multiplicacion2_c
	gcc multiplicacion2.c -o multiplicacion2
	gcc traspuesta.c -o traspuesta

clear:
	rm -f $(BIN) *.o
	rm -f suma2
	rm -f resta2
	rm -f multiplicacion2
	rm -f multiplicacion2_c
	rm -f traspuesta

debug: $(C_SOURCES)
	$(CC) -g -o $(BIN) $(C_SOURCES)

#Aqui se detalla cada uno de los archivos y sus dependencias. Colocar mas si corresponde

main.o : main.c archivos.h
	$(CC) $(C_FLAGS) main.c
	
archivos.o : archivos.c archivos.h
	$(CC) $(C_FLAGS) archivos.c

#Es para asegurarse que no queden archivos no compilados
%.o : %.c
	$(CC) $(C_FLAGS) $< -o $@
