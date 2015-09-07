divisores: divisores.o conta_div.o
	gcc divisores.o conta_div.o -o divisores
divisores.o: divisores.c
	gcc -c divisores.c
divisores.o: conta_div.c util.h
	gcc -c conta_div.c
clean:
	rm *.o
