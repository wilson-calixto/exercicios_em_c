all: Lista2.1

Lista2.1: volume_esfera.o Lista2.1.o
	gcc Lista2.1.o volume_esfera.o  -o Lista2.1

Lista2.1.o: Lista2.1.c
	gcc -c Lista2.1.c

volume_esfera.o: volume_esfera.c util.h
	gcc -c volume_esfera.c 

clean:
	rm *.o
