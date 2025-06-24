# Nome do compilador
CC = g++

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_ed16_main.cpp

# Arquivos de cabeçalho
HEADERS = array.h

# Arquivos objeto gerados
OBJ = aed1_ed16_main.o 

# Nome do executável final
TARGET = aed1_ed16_main.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c array.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
