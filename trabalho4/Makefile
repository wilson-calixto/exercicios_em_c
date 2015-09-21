all: bin obj lista3.02 lista4.02 lista4.7

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



# >>>> continue aqui <<<<


# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

#Limpar objetos criados na compilação
clean:
	rm -rf $(path_obj)*.
mrproper:
	rm -rf $(path_bin)*
