all: lista2.15 

lista2.15: media.o lista2.15.o util.o
	gcc lista2.15.o media.o util.o -o lista2.15

lista2.15.o: lista2.15.c
	gcc -c lista2.15.c

media.o: media.c
	gcc -c media.c

util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c
	
clean:
	rm -rf *.o

mrproper:
	rm -rf 
