# Nome do compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_rec_main.c aed1_rec.c

# Arquivos de cabeçalho
HEADERS = aed1_rec.h

# Arquivos objeto gerados
OBJ = aed1_rec_main.o aed1_rec.o

# Nome do executável final
TARGET = aed1_rec_main.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)