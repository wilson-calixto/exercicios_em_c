all: q411b

q411b: q4.11.b.o f4.11.b.o 
	gcc q4.11.b.o f4.11.b.o -o q411b

q4.11.b.o: q4.11.b.c
	gcc -c q4.11.b.c

f4.11.b.o: f4.11.b.c
	gcc -c f4.11.b.c

clean:
	rm -rf q411b *.o
