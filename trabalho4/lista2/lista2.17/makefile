all: lista2.17

lista2.17: lista2.17.o functions.o
	gcc lista2.17.o functions.o -o lista2.17

lista2.17.o: lista2.17.c
	gcc -c lista2.17.c

functions.o: functions.c
	gcc -c functions.c

clean:
	rm -rf *.o

mrproper: clean
	rm -rf lista2.17

