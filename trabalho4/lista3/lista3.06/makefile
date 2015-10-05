all: q3.6

q3.6: lista3.6.o f3.6.o
	gcc lista3.6.o f3.6.o -o q3.6

lista3.6.o: lista3.6.c
	gcc -c lista3.6.c

f3.6.o: f3.6.c
	gcc -c f3.6.c

clean:
	rm -rf q3.6 *.o
