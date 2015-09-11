all: bin obj lista2.15 lista2.20 lista2.25 lista1.6 lista2.2 lista4.4.a desafio3

# Cria pasta BIN
# Todos os arquivos binário estrão nesse diretório
bin:
	mkdir -p bin

# Cria um pasta OBJ
# Arquivos .o gerados pela na compilação
obj:
	mkdir -p obj

path_bin = bin/
path_obj = obj/

# Bloco para compilar questão 15 - lista 2
lista2.15: lista2.15.o calc_mean.o
	gcc $(path_obj)lista2.15.o $(path_obj)/calc_mean.o -o $(path_bin)lista2.15

lista2.15.o: lista2/lista2.15/lista2.15.c
	gcc -o $(path_obj)lista2.15.o -c lista2/lista2.15/lista2.15.c

calc_mean.o: lista2/lista2.15/calc_mean.c
	gcc -o $(path_obj)calc_mean.o -c lista2/lista2.15/calc_mean.c

# Bloco para compilar questão 20 - lista 2
lista2.20: lista2.20.o calc_sum.o
	gcc $(path_obj)lista2.20.o $(path_obj)calc_sum.o -o $(path_bin)lista2.20

lista2.20.o: lista2/lista2.20/lista2.20.c
	gcc -o $(path_obj)lista2.20.o -c lista2/lista2.20/lista2.20.c

calc_sum.o: lista2/lista2.20/calc_sum.c
	gcc -o $(path_obj)calc_sum.o -c lista2/lista2.20/calc_sum.c

# Bloco para compilar questão 25 - lista 2
lista2.25: lista2.25.o util.o
	gcc $(path_obj)lista2.25.o $(path_obj)util.o -o $(path_bin)lista2.25

lista2.25.o: lista2/lista2.25/lista2.25.c
	gcc -o $(path_obj)lista2.25.o -c lista2/lista2.25/lista2.25.c

# Bloco para compilar questão 6 - lista 1
lista1.6: lista1.6.o lib_function.o
	gcc $(path_obj)lista1.6.o $(path_obj)lib_function.o -o $(path_bin)lista1.6

lista1.6.o: lista1/lista1.06/lista1.6.c
	gcc -o $(path_obj)lista1.6.o -c lista1/list1.06/lista1.6.c

lib_function.o: lista1/lista1.06/lib_function.c
	gcc -o $(path_obj)lib_function.o -c lista1/lista1.06/lib_function.c

# Bloco para compilar questão 2 - lista 1
lista2.2: lista2.2.o function.o
	gcc $(path_obj)lista2.2.o $(path_obj)funciton.o -o lista2.2

lista2.2.o: lista2/lista2.02/lista2.2.c
	gcc -o $(path_obj)lista2.2.o -c lista2/lista2.02/lista2.2.c

function.o: lista2/lista2.02/function.c
	gcc -o $(path_obj)function.c -c lista2/lista2.02/function.c

# Bloco para compilar questão 4 - lista 4 (a)
lista4.4.a: lista4.4.a.o util.o
	gcc $(path_obj)lista4.4.a.o $(path_obj)util.o -o lista4.4.a

lista4.4.a.o: lista4/lista4.04/a/lista4.4.a.c
	gcc -o $(path_obj)lista4.4.a.o -c lista4/lista4.04/a/lista4.4.a.c

# Bloco para compilar a questão desafio 3 - lista 3
desafio3: desafio3.o util.o
	gcc $(path_obj)desafio3.o $(path_obj)util.o -o desafio3

desafio3.o: lista3/desafio3/desafio3.c
	gcc -o $(path_obj)desafio3.o -c lista3/desafio3/desafio3.c

# Bloco para compilar a questão 10 - lista 2
lista2.10: lista2.10.o ideal_weight.o
	gcc $(path_obj)lista2.10.o $(path_obj)ideal_weight.o -o lista2.10

lista2.10.o: lista2/lista2.10/lista2.10.c
	gcc -o $(path_obj)lista2.10.o -c lista2/lista2.10/lista2.10.c

ideal_weight.o: lista2/lista2.10/ideal_weight.c
	gcc -o $(path_obj)ideal_weight.o -c lista2/lista2.10/ideal_weight.c

# Bloco 

##

# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf $(path_obj)*.o

mrproper:
	rm -rf $(path_bin)*
