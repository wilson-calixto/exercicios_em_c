all: lista4.01
lista4.01: conta_digitos.o lista4.01a.o
	gcc  conta_digitos.o lista4.01a.o -o lista4.01a
lista4.01a.o: lista4.01a.c
	gcc -c lista4.01a.c
conta_digitos.o: conta_digitos.c
	gcc -c conta_digitos.c
clean: 
	rm -rf *.o
remove: clean
	rm -rf lista4.01a

