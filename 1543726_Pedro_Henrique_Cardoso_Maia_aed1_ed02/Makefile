# Nome do compilador
CC = gcc

# Opções de compilação
CFLAGS = -Wall -g

# Arquivos de origem
SRC = aed1_ed02_main.c aed1_ed02.c

# Arquivos de cabeçalho
HEADERS = aed1_ed02.h

# Arquivos objeto gerados
OBJ = aed1_ed02_main.o aed1_ed02.o

# Nome do executável final
TARGET = aed1_ed02_main.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "🧹 Limpando arquivos compilados..."
	@if exist $(TARGET) (del /F /Q $(TARGET)) else (rm -f $(TARGET))
	@if exist $(OBJ) (del /F /Q $(OBJ)) else (rm -f $(OBJ))

run: $(TARGET)
	./$(TARGET)