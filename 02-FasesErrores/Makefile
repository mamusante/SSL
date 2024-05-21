# Variables
CC = gcc
ASFLAGS = -Wall -O2
CFLAGS = -Wall -O2

# Regla por defecto para generar el ejecutable
all: hello7

# Regla para generar el archivo .o a partir de un archivo .s
%.o: %.s
	$(CC) $(ASFLAGS) -c $< -o $@

# Regla para generar el ejecutable a partir del archivo objeto
hello7: hello7.o
	$(CC) $(CFLAGS) hello7.o -o hello7

# Limpiar archivos generados
clean:
	rm -f *.o hello7