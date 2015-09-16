all: lista2.12

lista2.12: lista2.12.o functions.o
	gcc lista.12.o functions.o lista2.12

lista2.12.o: lista2.12.c
	gcc -c lista2.12.c

functions.o: functions.c
	gcc -c functions.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.12

