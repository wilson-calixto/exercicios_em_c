all: lista2.15 

lista2.15: fl2.15.o lista2.15.o 
	gcc lista2.15.o fl2.15.o -o lista2.15

lista2.15.o: lista2.15.c
	gcc -c lista2.15.c

fl2.15.o: fl2.15.c
	gcc -c fl2.15.c

clean:
	rm -rf *.o

mrproper:
	rm -rf 
