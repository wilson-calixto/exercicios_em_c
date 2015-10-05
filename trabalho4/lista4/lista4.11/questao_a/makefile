all: q4.11

q4.11: mainq4.11.o f4.11.o
	gcc mainq4.11.o f4.11.o -o q4.11 

mainq4.11.o: mainq4.11.c
	gcc -c mainq4.11.c

f4.11.o: f4.11.c
	gcc -c f4.11.c

clean:
	rm -rf q4.11 *.o
