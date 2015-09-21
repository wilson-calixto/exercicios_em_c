all:la lb

la:menor_do_vetor.o la.o
	gcc menor_do_vetor.o la.o -o la

la.o:la.c
	gcc -c la.c

#lb

lb:menor_do_vetor.o lb.o
	gcc menor_do_vetor.o lb.o -o lb

lb.o:lb.c
	gcc -c lb.c

menor_do_vetor.o:menor_do_vetor.c
	gcc -c menor_do_vetor.c

clean:
	rm -rf *.o

mrproper:
	rm -rf la lb
