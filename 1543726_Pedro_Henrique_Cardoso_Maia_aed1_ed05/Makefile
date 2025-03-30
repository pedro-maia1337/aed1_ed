# Nome do compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_ed05_main.c aed1_ed05.c

# Arquivos de cabeçalho
HEADERS = aed1_ed05.h

# Arquivos objeto gerados
OBJ = aed1_ed05_main.o aed1_ed05.o

# Nome do executável final
TARGET = aed1_ed05_main.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)