all: lista4.02

lista4.02:f.o lista4.02.o
	gcc f.o lista4.02.o -o lista4.02

funcao.o:f.c
	gcc -c f.c

lista4.02.o:lista4.02.c 
	gcc -c lista4.02.c

clean:
	rm -rf *.o
mrproper:
	rm -rf lista4.02
