CC = gcc
CFLAGS = -Wall
OBJ = main.o comprimento.o massa.o volume.o temperatura.o velocidade.o potencia.o area.o tempo.o dados.o
TARGET = conversor

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)
