# Nome do compilador
CC = gcc

# Flags de compilação
CFLAGS = -std=c11 -Wall -g

# Diretórios
SRC_DIR = .
UTILS_DIR = utils
SORTING_DIR = sorting

# Lista de arquivos fonte
SRCS = $(SRC_DIR)/main.c \
       $(UTILS_DIR)/utils.c \
       $(SORTING_DIR)/insertion.c \
       $(SORTING_DIR)/selection.c \
       $(SORTING_DIR)/bubble.c \
       $(SORTING_DIR)/merge.c

# Lista de arquivos objeto
OBJS = $(SRCS:.c=.o)

# Nome do executável
TARGET = ds2

# Regra padrão
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

# Regra para compilar arquivos .c em arquivos .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos gerados
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
