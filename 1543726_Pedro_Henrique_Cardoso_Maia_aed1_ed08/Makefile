# Nome do compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_ed08_main.c aed1_ed08.c

# Arquivos de cabeçalho
HEADERS = aed1_ed08.h

# Arquivos objeto gerados
OBJ = aed1_ed08_main.o aed1_ed08.o

# Nome do executável final
TARGET = aed1_ed08_main.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)