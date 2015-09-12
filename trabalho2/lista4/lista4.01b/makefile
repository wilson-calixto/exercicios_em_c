all:lista4.01b
lista4.01b: eh_permut.o lista4.01b.o util.o
	gcc util.o  eh_permut.o lista4.01b.o -o lista4.01b
lista4.01b.o: lista4.01b.c
	gcc -c lista4.01b.c
eh_permut.o: eh_permut.c 
	gcc -c eh_permut.c
util.o: ../../util.c/util.c
	gcc -c ../../util.c/util.c
clean:
	rm -rf *.o
remove: clean
	rm -rf lista4.01b

