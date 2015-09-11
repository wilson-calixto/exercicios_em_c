all: lista2.15 lista2.20 lista2.25

# Bloco para compilar questão 15 - lista 2
lista2.15: lista2.15.o calc_mean.o
	gcc lista2.15.o calc_mean.o -o lista2.15

lista2.15.o: lista2/lista2.15/lista2.15.c
	gcc -c lista2/lista2.15/lista2.15.c

calc_mean.o: lista2/lista2.15/calc_mean.c
	gcc -c lista2/lista2.15/calc_mean.c

# Bloco para compilar questão 20 - lista 2
lista2.20: lista2.20.o calc_sum.o
	gcc lista2.20.o calc_sum.o -o lista2.20

lista2.20.o: lista2/lista2.20/lista2.20.c
	gcc -c lista2/lista2.20/lista2.20.c

calc_sum.o: lista2/lista2.20/calc_sum.c
	gcc -c lista2/lista2.20/calc_sum.c

# Bloco para compilar questão 25 - lista 2
lista2.25: lista2.25.o util.o
	gcc lista2.25.o util.o -o lista2.25

lista2.25.o: lista2/lista2.25/lista2.25.c
	gcc -c lista2/lista2.25/lista2.25.c

##

# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf *.o
