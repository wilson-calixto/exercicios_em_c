all: lista2.6

lista2.6: idadedias.o lista2.6.o
	gcc lista2.6.o idadedias.o -o lista2.6

lista2.6.o: lista2.6.c
	gcc -c lista2.6.c

idadedias.o: Dreka.h
	gcc -c idadedias.c 

clean:
	rm *.o
