CC = gcc
CFLAGS = -Wall

all: main

main: main.c addition.o soustraction.o multiplication.o division.o
	$(CC) $(CFLAGS) -o main main.c addition.o soustraction.o multiplication.o division.o

addition.o: addition.c operations.h
	$(CC) $(CFLAGS) -c addition.c

soustraction.o: soustraction.c operations.h
	$(CC) $(CFLAGS) -c soustraction.c

multiplication.o: multiplication.c operations.h
	$(CC) $(CFLAGS) -c multiplication.c

division.o: division.c operations.h
	$(CC) $(CFLAGS) -c division.c

clean:
	rm -f *.o main
