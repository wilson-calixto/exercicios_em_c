all: lista3.12

lista3.12: lista3.12.o empresa.o
	gcc lista3.12.o empresa.o -o lista3.12
	
lista3.12.o: lista3.12.c
	gcc -c lista3.12.c
	
empresa.o: empresa.c
	gcc -c empresa.c

clean: 
	rm -rf *.o

	