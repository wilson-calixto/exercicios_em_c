all: is_pos

is_pos: p.o is_pos.o
	gcc is_pos.o p.o -o is_pos

is_pos.o: is_pos.c
	gcc -c is_pos.c

p.o: p.c
	gcc -c p.c

clean:
	rm -rf *.o
