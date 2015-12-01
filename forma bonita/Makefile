#Este es un archivo de ejemplo para compilar la lista
BIN               := main
CC                := gcc
LINKER            := gcc
C_SOURCES         := main.c archivos.c
C_OBJS            := main.o archivos.o
C_FLAGS           := -c

all: $(C_OBJS)
	$(CC) -o $(BIN) $(C_OBJS)

clear:
	rm -f $(BIN) *.o

debug: $(C_SOURCES)
	$(CC) -g -o $(BIN) $(C_SOURCES)

#Aqui se detalla cada uno de los archivos y sus dependencias. Colocar mas si corresponde

main.o : main.c struct.h archivos.h funciones.h  
	$(CC) $(C_FLAGS) main.c
	
archivos.o : archivos.c struct.h archivos.h
	$(CC) $(C_FLAGS) archivos.c
	
funciones.o : funciones.c struct.h funciones.h
	$(CC) $(C_FLAGS) funciones.c

#Es para asegurarse que no queden archivos no compilados
%.o : %.c
	$(CC) $(C_FLAGS) $< -o $@
