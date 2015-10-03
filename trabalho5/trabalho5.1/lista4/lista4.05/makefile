all: lista4.05

lista4.05: position.o lista4.05.o
	gcc lista4.05.o position.o -o lista4.05

lista4.05.o: lista4.05.c
	gcc -c lista4.05.c

position.o: position.c
	gcc -c position.c
	
clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista4.05
