# Nome do compilador
CC = g++

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_ed11_main.cpp

# Arquivos de cabeçalho
HEADERS = myarray.hpp

# Arquivos objeto gerados
OBJ = aed1_ed12_main.o 

# Nome do executável final
TARGET = aed1_ed12_main.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp myarray.hpp mymatriz.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
