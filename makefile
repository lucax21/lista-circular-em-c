all: program

program: main.o lista_circular.o
	gcc main.o lista_circular.o -lm -o program

lista_circular.o: lista_circular.c lista_circular.h
	gcc -c lista_circular.c

main.o: main.c lista_circular.h
	gcc -c main.c

clear:
	rm -rf *.o program
