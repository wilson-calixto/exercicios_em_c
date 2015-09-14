all: lista4.6
lista4.6: mdc.o lista4.6.o	
	gcc mdc.o lista4.6.o -o lista4.6
mdc.o: mdc.c
	gcc -c mdc.c
lista4.6.o: lista4.6.c
	gcc -c lista4.6.c
clean:
	rm -rf *.o
mrproper: clean 
	rm -rf lista4.6

