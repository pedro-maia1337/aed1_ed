# Nome do compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_pa1.c

# Arquivos de cabeçalho
#HEADERS = aed1_ed06.h

# Arquivos objeto gerados
OBJ = aed1_pa1.o

# Nome do executável final
TARGET = aed1_pa1.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

#%.o: %.c $(HEADERS)
#	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)