all: bin obj lista1.04 lista1.09 lista1.14 lista3.02 lista4.02 lista4.7 lista2.02 lista2.07 lista2.12 lista2.17 lista3.04 lista3.09 lista3.14 lista4.04 lista4.09.a lista4.09.b

# Cria pasta BIN
# Todos os arquivos binários estarão nesse diretório

bin:
	mkdir -p bin

# Criar pasta OBJ
# Arquivos .o gerados na compilação

obj:
	mkdir -p obj

path_bin = bin/
path_obj = obj/

# Bloco para compilar a questão 04 - lista 01
lista1.04: lista1.04.o
	gcc $(path_obj)lista1.04.o -o $(path_bin)lista1.04

lista1.04.o: lista1/lista1.04/lista1.04.c
	gcc -o $(path_obj)lista1.04.o -c lista1/lista1.04/lista1.04.c
	

# Bloco para compilar a questão 09 - lista 01
lista1.09: lista1.09.o bubble_sort.o
	gcc $(path_obj)lista1.09.o  $(path_obj)bubble_sort.o -o $(path_bin)lista1.09

lista1.09.o: lista1/lista1.09/lista1.09.c
	gcc -o $(path_obj)lista1.09.o -c lista1/lista1.09/lista1.09.c

bubble_sort.o: lista1/lista1.09/bubble_sort.c
	gcc -o $(path_obj)bubble_sort.o -c lista1/lista1.09/bubble_sort.c

# Bloco para compilar a questão 14 - lista 01
lista1.14: inicializar.o lista1.14.o
	gcc $(path_obj)inicializar.o $(path_obj)lista1.14.o -o $(path_bin)lista1.14

lista1.14.o: lista1/lista1.14/lista1.14.c
	gcc -o $(path_obj)lista1.14.o -c lista1/lista1.14/lista1.14.c

inicializar.o: lista1/lista1.14/inicializar.c
	gcc -o $(path_obj)inicializar.o -c lista1/lista1.14/inicializar.c


# Bloco para compilar a questão 02 - lista 03
lista3.02: lista3.02.o equacao.o util.o
	gcc $(path_obj)lista3.02.o $(path_obj)equacao.o $(path_obj)util.o -o $(path_bin)lista3.02

lista3.02.o: lista3/lista3.02/lista3.02.c
	gcc -o $(path_obj)lista3.02.o -c lista3/lista3.02/lista3.02.c

equacao.o: lista3/lista3.02/equacao.c
	gcc -o $(path_obj)equacao.o -c lista3/lista3.02/equacao.c	
	

# Bloco para compilar a questão 07 - lista 03
lista3.07: lista3.07.o magico.o util.o
	gcc $(path_obj)lista3.07.o $(path_obj)magico.o $(path_obj)util.o -o $(path_bin)lista3.07

lista3.07.o: lista3/lista3.07/lista3.07.c
	gcc -o $(path_obj)lista3.07.o -c lista3/lista3.07/lista3.07.c

magico.o: lista3/lista3.07/magico.c
	gcc -o $(path_obj)magico.o -c lista3/lista3.07/magico.c



# Bloco para compilar a questão 02 - lista 04
lista4.02: lista4.02.o matrix.o
	gcc $(path_obj)lista4.02.o $(path_obj)matrix.o -o $(path_bin)lista4.02

lista4.02.o: lista4/lista4.02/lista4.02.c
	gcc -o $(path_obj)lista4.02.o -c lista4/lista4.02/lista4.02.c

matrix.o: lista4/lista4.02/matrix.c
	gcc -o $(path_obj)matrix.o -c lista4/lista4.02/matrix.c



# Bloco para compilar a questão 07 - lista 04
lista4.7: lista4.7.o sets_ab.o
	gcc $(path_obj)lista4.7.o $(path_obj)sets_ab.o -o $(path_bin)lista4.7

lista4.7.o: lista4/lista4.07/lista4.7.c
	gcc -o $(path_obj)lista4.7.o -c lista4/lista4.07/lista4.7.c

sets_ab.o: lista4/lista4.07/sets_ab.c
	gcc -o $(path_obj)sets_ab.o -c lista4/lista4.07/sets_ab.c


#questoes grupo rai

# Bloco para compilar a questão 02 - lista 02
lista2.02:lista2.02.o process.o
	gcc $(path_obj)lista2.02.o $(path_obj)process.o -o $(path_bin)lista2.02

lista2.02.o:lista2/lista2.02/lista2.02.c
	gcc -o $(path_obj)lista2.02.o -c lista2/lista2.02/lista2.02.c

process.o:lista2/lista2.02/process.c
	gcc -o $(path_obj)process.o -c lista2/lista2.02/process.c

# Bloco para compilar a questão 07 - lista 02
lista2.07:lista2.07.o flista2.07.o
	gcc $(path_obj)lista2.07.o $(path_obj)flista2.07.o -o $(path_bin)lista2.07

lista2.07.o: lista2/lista2.07/lista2.07.c
	gcc -o $(path_obj)lista2.07.o -c lista2/lista2.07/lista2.07.c

flista2.07.o: lista2/lista2.07/flista2.07.c
	gcc -o $(path_obj)flista2.07.o -c lista2/lista2.07/flista2.07.c

# Bloco para compilar a questão 12 - lista 02
lista2.12: lista2.12.o flista2.12.o
	gcc $(path_obj)lista2.12.o $(path_obj)flista2.12.o -o $(path_bin)lista2.12

lista2.12.o: lista2/lista2.12/lista2.12.c
	gcc -o $(path_obj)lista2.12.o -c lista2/lista2.12/lista2.12.c

flista2.12.o: lista2/lista2.12/flista2.12.c
	gcc -o $(path_obj)flista2.12.o -c lista2/lista2.12/flista2.12.c

# Bloco para compilar a questao 17 - lista 02
lista2.17: lista2.17.o flista2.17.o
	gcc $(path_obj)lista2.17.o $(path_obj)flista2.17.o -o $(path_bin)lista2.17

lista2.17.o: lista2/lista2.17/lista2.17.c
	gcc -o $(path_obj)lista4.7.o -c lista2/lista2.17/lista2.17.c

flista2.17.o: lista2/lista2.17/flista2.17.c
	gcc -o $(path_obj)flista2.17.o -c lista2/lista2.17/flista2.17.c


#lista3

#bloco para compilar a questao 04 - lista 03
lista3.04: lista3.04.o flista3.04.o
	gcc $(path_obj)lista3.04.o $(path_obj)flista3.04.o -o $(path_bin)lista3.04

lista3.04.o: lista3/lista3.04/lista3.04.c
	gcc -o $(path_obj)lista3.04.o -c lista3/lista3.04/lista3.04.c

flista3.04.o: lista3/lista3.04/flista3.04.c
	gcc -o $(path_obj)flista3.04.o -c lista3/lista3.04/flista3.04.c


#bloco para compilar a questao 09 - lista 03
lista3.09: lista3.09.o
	gcc $(path_obj)lista3.09.o -o $(path_bin)lista3.04

lista3.09.o: lista3/lista3.09/lista3.09.c
	gcc -o $(path_obj)lista3.09.o -c lista3/lista3.09/lista3.09.c


# Bloco para compilar a questão 14 - lista 03
lista3.14: lista3.14.o flista3.14.o
	gcc $(path_obj)lista3.14.o $(path_obj)flista3.14.o -o $(path_bin)lista3.14

lista3.14.o: lista3/lista3.14/lista3.14.c
	gcc -o $(path_obj)lista3.14.o -c lista3/lista3.14/lista3.14.c

flista3.14.o: lista3/lista3.14/flista3.14.c
	gcc -o $(path_obj)flista3.14.o -c lista3/lista3.14/flista3.14.c


#lista4

# Bloco para compilar a questão 04 - lista 04
lista4.04: lista4.04.o flista4.04.o
	gcc $(path_obj)lista4.04.o $(path_obj)flista4.04.o -o $(path_bin)lista4.04

lista4.04.o: lista4/lista4.04/lista4.04.c
	gcc -o $(path_obj)lista4.04.o -c lista4/lista4.04/lista4.04.c

flista4.04.o: lista4/lista4.04/flista4.04.c
	gcc -o $(path_obj)flista4.04.o -c lista4/lista4.04/flista4.04.c


# Bloco para compilar as questoes 09.a 09.b - lista4
#09.a
lista4.09.a: la.o menor_do_vetor.o
	gcc $(path_obj)la.o $(path_obj)menor_do_vetor.o -o $(path_bin)lista4.09.a

la.o: lista4/lista4.09/la.c
	gcc -o $(path_obj)la.o -c lista4/lista4.09/la.c

#09.b
lista4.09.b:lb.o menor_do_vetor.o 
	gcc $(path_obj)lb.o $(path_obj)menor_do_vetor.o -o $(path_bin) lista4.09.b


lb.o:lista4/lista4.09/lb.c
	gcc -o $(path_obj)lb.o -c lista4/lista4.09/lb.c

menor_do_vetor.o: lista4/lista4.09/menor_do_vetor.c
	gcc -o $(path_obj)menor_do_vetor.o -c lista4/lista4.04/menor_do_vetor.c


# >>>> continue aqui <<<<


# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

#Limpar objetos criados na compilação
clean:
	rm -rf $(path_obj)*.
mrproper:
	rm -rf $(path_bin)*
