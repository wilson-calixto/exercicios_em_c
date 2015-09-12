all: Lista2.1

Lista2.1: volume_esfera.o Lista2.1.o util.o
	gcc Lista2.1.o volume_esfera.o util.o  -o Lista2.1

Lista2.1.o: Lista2.1.c
	gcc -c Lista2.1.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c

volume_esfera.o: volume_esfera.c volume_esfera.h ../../util.c/util.h
	gcc -c volume_esfera.c 

clean:
	rm *.o
