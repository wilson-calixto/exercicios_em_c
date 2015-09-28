all:q41b

q41b: q4.1.b.o f4.1.b.o
	gcc q4.1.b.o f4.1.b.o -o q41b

q4.1.b.o: q4.1.b.c
	gcc -c q4.1.b.c

f4.1.b.o: f4.1.b.c	
	gcc -c f4.1.b.c

clean:
	rm -rf q41b *.o
