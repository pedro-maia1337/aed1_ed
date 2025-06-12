# Nome do compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_rec2_main.c

# Arquivos de cabeçalho
HEADERS = myarray.hpp mymatriz.h io.h supermercado.h myCharArray.h

# Arquivos objeto gerados
OBJ = aed1_rec2_main.o 

# Nome do executável final
TARGET = aed1_rec_main.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c myarray.h mymatriz.h io.h supermercado.h myCharArray.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
