# Nome do compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -g

# Fonte e objeto
SRC = aed1_pa2_main.c
OBJ = aed1_pa2_main.o

# Executável final
TARGET = aed1_pa2_main.exe

# Regra principal
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC) myarray.h mymatriz.h
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

# Limpeza (use 'del' para Windows, 'rm -f' para Linux/Mac)
clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
