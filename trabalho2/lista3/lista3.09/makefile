all: lista3.09
lista3.09:  util.o lista3.09.o
	gcc util.o lista3.09.o -o lista3.09
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c
lista3.09.o: lista3.09.c
	gcc -c lista3.09.c
clean:
	rm -rf *.o
remove: clean
	rm -rf lista3.09
