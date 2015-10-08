all: q2.6.a q2.6.b

q2.6.a: q2.6.a.o f2.6.o
	gcc q2.6.a.o f2.6.o -o q2.6.a

q2.6.b: q2.6.b.o f2.6.o
	gcc q2.6.b.o f2.6.o -o q2.6.b

q2.6.a.o: q2.6.a.c
	gcc -c q2.6.a.c

q2.a.b.o: q2.6.b.c
	gcc -c q2.6.b.c

f2.6.o: f2.6.c
	gcc -c f2.6.c

clean:
	rm -rf q2.6.a q2.6.b *.o
