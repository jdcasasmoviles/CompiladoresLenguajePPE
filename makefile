# Variables de directorios y programas
CC  = gcc

INC_DIR = include
SRC_DIR = src

# Directorios por extensiones de los archivos
vpath %.h include
vpath %.c src
vpath %.y src

# Opciones para el compilador
OPT = -std=c99 -g -I$(INC_DIR)

# Reglas de construccion
main: main.c parser.o scanner.o structs.o parfuns.o
	$(CC) $^ $(OPT) -o $@

structs.o: structs.c
	$(CC) -c $(OPT) -D_GNU_SOURCE $< -o $@

parser.o: parser.c parfuns.o
	$(CC) -c $(OPT) $< -o $@

parfuns.o: parfuns.c
	$(CC) -c $(OPT) -D_GNU_SOURCE $< -o $@

scanner.o: scanner.c
	$(CC) -c $< $(OPT) -D_GNU_SOURCE -o $@

parser.c: parser.y
	bison -d $< --defines=$(INC_DIR)/parser.h --output=$@

clean:
	rm -f *.o
	mv -f parser.c src/parser.c
