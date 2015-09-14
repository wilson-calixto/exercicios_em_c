Calcula_Fatorial_Inverso:		Calcula_Fatorial_Inverso.o fat.o calc_num.o
	gcc Calcula_Fatorial_Inverso.o fat.o calc_num.o -o Calcula_Fatorial_Inverso

Calcula_Fatorial_Inverso.o:		Calcula_Fatorial_Inverso.c
	gcc -c Calcula_Fatorial_Inverso.c

fat.o:		fat.c Calcula_Fatorial_Inverso.h
	gcc -c fat.c

calc_num.o:	calc_num.c Calcula_Fatorial_Inverso.h
	gcc -c calc_num.c

clean:
	rm *.o
