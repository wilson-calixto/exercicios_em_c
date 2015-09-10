all: lista2.4
lista2.4: bhaskara.o lista2.4.o	
	gcc bhaskara.o lista2.4.o -o lista2.4
bhaskara.o: bhaskara.c
	gcc -c bhaskara.c
lista2.4.o: lista2.4.c
	gcc -c lista2.4.c
clean:
	rm -rf *.o
mrproper: clean 
	rm -rf lista2.4

