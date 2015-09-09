all: exec
exec: triangle.o lista2.13.o
	gcc triangle.o lista2.13.o -o exec
triangle.o: triangle.c
	gcc -c triangle.c
lista2.13.o: lista2.13.c
	gcc -c lista2.13.c
clean:
	rm -rf *.o
remove: clean
	rm -rf exec
