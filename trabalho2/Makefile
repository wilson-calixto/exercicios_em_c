all: bin obj lista2.15 lista2.20 lista2.25 lista1.6 lista2.2 lista4.4.a desafio3 lista2.10 lista3.11 lista2.07 lista3.08 lista3.3 lista1.1 lista1.03 lista1.08 lista1.11 lista2.04 lista2.13 lista2.18 lista3.05  lista3.09 lista4.01a lista4.01b lista4.06 lista2.23 lista1.04 lista3.10 lista2.05 lista4.02
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
	gcc -o $(path_obj)lista1.6.o -c lista1/lista1.06/lista1.6.c

lib_function.o: lista1/lista1.06/lib_function.c
	gcc -o $(path_obj)lib_function.o -c lista1/lista1.06/lib_function.c

# Bloco para compilar questão 2 - lista 1
lista2.2: lista2.2.o calc_media.o
	gcc $(path_obj)lista2.2.o $(path_obj)calc_media.o -o $(path_bin)lista2.2

lista2.2.o: lista2/lista2.02/lista2.2.c
	gcc -o $(path_obj)lista2.2.o -c lista2/lista2.02/lista2.2.c

calc_media.o: lista2/lista2.02/calc_media.c
	gcc -o $(path_obj)calc_media.o -c lista2/lista2.02/calc_media.c

# Bloco para compilar questão 4 - lista 4 (a)
lista4.4.a: lista4.4.a.o util.o
	gcc $(path_obj)lista4.4.a.o $(path_obj)util.o -o $(path_bin)lista4.4.a

lista4.4.a.o: lista4/lista4.04/a/lista4.4.a.c
	gcc -o $(path_obj)lista4.4.a.o -c lista4/lista4.04/a/lista4.4.a.c

# Bloco para compilar a questão desafio 3 - lista 3
desafio3: desafio3.o util.o
	gcc $(path_obj)desafio3.o $(path_obj)util.o -o $(path_bin)desafio3

desafio3.o: lista3/desafio3/desafio3.c
	gcc -o $(path_obj)desafio3.o -c lista3/desafio3/desafio3.c

# Bloco para compilar a questão 10 - lista 2
lista2.10: lista2.10.o ideal_weight.o
	gcc $(path_obj)lista2.10.o $(path_obj)ideal_weight.o -o $(path_bin)lista2.10

lista2.10.o: lista2/lista2.10/lista2.10.c
	gcc -o $(path_obj)lista2.10.o -c lista2/lista2.10/lista2.10.c

ideal_weight.o: lista2/lista2.10/ideal_weight.c
	gcc -o $(path_obj)ideal_weight.o -c lista2/lista2.10/ideal_weight.c

# Bloco para compilar a questão 11 - lista 3
lista3.11: lista3.11.o calculation_tests.o
	gcc $(path_obj)lista3.11.o $(path_obj)calculation_tests.o -o $(path_bin)lista3.11

lista3.11.o: lista3/lista3.11/lista3.11.c
	gcc -o $(path_obj)lista3.11.o -c lista3/lista3.11/lista3.11.c

calculation_tests.o: lista3/lista3.11/calculation_tests.c
	gcc -o $(path_obj)calculation_tests.o -c lista3/lista3.11/calculation_tests.c

# Bloco para compilar a questão 7 - lista 2
lista2.07: lista2.07.o util.o
	gcc $(path_obj)lista2.07.o $(path_obj)util.o -o $(path_bin)lista2.07

lista2.07.o: lista2/lista2.07/lista2.07.c
	gcc -o $(path_obj)lista2.07.o -c lista2/lista2.07/lista2.07.c

# Bloco para compilar a questão 8 - lista 3
lista3.08: lista3.08.o dice.o
	gcc $(path_obj)lista3.08.o $(path_obj)dice.o -o $(path_bin)lista3.08

lista3.08.o: lista3/lista3.08/lista3.08.c
	gcc -o $(path_obj)lista3.08.o -c lista3/lista3.08/lista3.08.c

dice.o: lista3/lista3.08/dice.c
	gcc -o $(path_obj)dice.o -c lista3/lista3.08/dice.c

# Bloco para compilar questão 3 - lista3
lista3.3: lista3.3.o cal_raizes.o
	gcc $(path_obj)lista3.3.o $(path_obj)cal_raizes.o -lm -o $(path_bin)lista3.3

lista3.3.o: lista3/lista3.03/lista3.3.c
	gcc -o $(path_obj)lista3.3.o -c lista3/lista3.03/lista3.3.c

cal_raizes.o: lista3/lista3.03/cal_raizes.c
	gcc -lm -o $(path_obj)cal_raizes.o -c lista3/lista3.03/cal_raizes.c

# Bloco para compilar questão 1 - lista 1
lista1.1: lista1.1.o qnt_numbers.o
	gcc $(path_obj)lista1.1.o $(path_obj)qnt_numbers.o -o $(path_bin)lista1.1

lista1.1.o: lista1/lista1.01/lista1.1.c
	gcc -o $(path_obj)lista1.1.o -c lista1/lista1.01/lista1.1.c

qnt_numbers.o: lista1/lista1.01/qnt_numbers.c
	gcc -o $(path_obj)qnt_numbers.o -c lista1/lista1.01/qnt_numbers.c

# -----Bloco para compilar a questão 3 da lista 1 -------
path_lista = lista1/lista1.03
lista1.03: soma.o lista1.03.o
	gcc $(path_obj)lista1.03.o $(path_obj)soma.o -o $(path_bin)lista1.03
lista1.03.o: $(path_lista)/lista1.03.c
	gcc -o $(path_obj)lista1.03.o -c  $(path_lista)/lista1.03.c
soma.o: $(path_lista)/soma.c
	gcc -o $(path_obj)soma.o -c $(path_lista)/soma.c

# -----------------------------Questao 8 da lista1 --------------------------------
lista1.08: util.o lista1.08.o
	gcc $(path_obj)lista1.08.o $(path_obj)util.o -o $(path_bin)lista1.08

lista1.08.o: lista1/lista1.08/lista1.08.c
	gcc -o $(path_obj)lista1.08.o -c  lista1/lista1.08/lista1.08.c

# Bloco para compilar questão 11 - lista 1
lista1.11: lista1.11.o data.o
	gcc $(path_obj)lista1.11.o $(path_obj)data.o -o $(path_bin)lista1.11

lista1.11.o: lista1/lista1.11/lista1.11.c
	gcc -o $(path_obj)lista1.11.o -c lista1/lista1.11/lista1.11.c

data.o: lista1/lista1.11/data.c
	gcc -o $(path_obj)data.o -c lista1/lista1.11/data.c

# Bloco para compilar questão 4 - lista 2
lista2.04: lista2.04.o baskaras.o
	gcc $(path_obj)lista2.04.o $(path_obj)baskaras.o -o $(path_bin)lista2.04 -lm

lista2.04.o: lista2/lista2.04/lista2.04.c
	gcc -o $(path_obj)lista2.04.o -c lista2/lista2.04/lista2.04.c

baskaras.o: lista2/lista2.04/baskaras.c
	gcc -o $(path_obj)baskaras.o -c lista2/lista2.04/baskaras.c

# Bloco para compilar questão 13 - lista 2
lista2.13: lista2.13.o triangle.o
	gcc $(path_obj)lista2.13.o $(path_obj)triangle.o -o $(path_bin)lista2.13 

lista2.13.o: lista2/lista2.13/lista2.13.c
	gcc -o $(path_obj)lista2.13.o -c lista2/lista2.13/lista2.13.c

triangle.o: lista2/lista2.13/triangle.c
	gcc -o $(path_obj)triangle.o -c lista2/lista2.13/triangle.c

# Bloco para compilar questão 18 - lista 2
lista2.18: lista2.18.o table.o
	gcc $(path_obj)lista2.18.o $(path_obj)table.o -o $(path_bin)lista2.18 

lista2.18.o: lista2/lista2.18/lista2.18.c
	gcc -o $(path_obj)lista2.18.o -c lista2/lista2.18/lista2.18.c

table.o: lista2/lista2.18/table.c
	gcc -o $(path_obj)table.o -c lista2/lista2.18/table.c

# Bloco para compilar questão 18 - lista 2
lista2.23: lista2.23.o iterate_number.o
	gcc $(path_obj)lista2.23.o $(path_obj)iterate_number.o -o $(path_bin)lista2.23 

lista2.23.o: lista2/lista2.23/lista2.23.c
	gcc -o $(path_obj)lista2.23.o -c lista2/lista2.23/lista2.23.c

iterate_number.o: lista2/lista2.23/iterate_number.c
	gcc -o $(path_obj)iterate_number.o -c lista2/lista2.23/iterate_number.c


# Bloco para compilar questão 09 - lista 3
lista3.09: lista3.09.o util.o
	gcc $(path_obj)lista3.09.o $(path_obj)util.o -o $(path_bin)lista3.09 

lista3.09.o: lista3/lista3.09/lista3.09.c
	gcc -o $(path_obj)lista3.09.o -c lista3/lista3.09/lista3.09.c

# Bloco para compilar questão 5 - lista 3
lista3.05: lista3.05.o lower_number.o
	gcc $(path_obj)lista3.05.o $(path_obj)lower_number.o -o $(path_bin)lista3.05 

lista3.05.o: lista3/lista3.05/lista3.05.c
	gcc -o $(path_obj)lista3.05.o -c lista3/lista3.05/lista3.05.c

lower_number.o: lista3/lista3.05/lower_number.c
	gcc -o $(path_obj)lower_number.o -c lista3/lista3.05/lower_number.c

# Bloco para compilar questão 1a- lista 4
lista4.01a: lista4.01a.o conta_digitos.o
	gcc $(path_obj)lista4.01a.o $(path_obj)conta_digitos.o -o $(path_bin)lista4.01a 

lista4.01a.o: lista4/lista4.01a/lista4.01a.c
	gcc -o $(path_obj)lista4.01a.o -c lista4/lista4.01a/lista4.01a.c

conta_digitos.o: lista4/lista4.01a/conta_digitos.c
	gcc -o $(path_obj)conta_digitos.o -c lista4/lista4.01a/conta_digitos.c

# Bloco para compilar questão 1b- lista 4
lista4.01b: lista4.01b.o eh_permut.o util.o
	gcc $(path_obj)lista4.01b.o $(path_obj)eh_permut.o $(path_obj)util.o -o $(path_bin)lista4.01b 

lista4.01b.o: lista4/lista4.01b/lista4.01b.c
	gcc -o $(path_obj)lista4.01b.o -c lista4/lista4.01b/lista4.01b.c

eh_permut.o: lista4/lista4.01b/eh_permut.c
	gcc -o $(path_obj)eh_permut.o -c lista4/lista4.01b/eh_permut.c

# Bloco para compilar questão 6 lista 4
lista4.06: lista4.06.o mdc_euclides.o 
	gcc $(path_obj)lista4.06.o $(path_obj)mdc_euclides.o  -o $(path_bin)lista4.06 

lista4.06.o: lista4/lista4.06/lista4.06.c
	gcc -o $(path_obj)lista4.06.o -c lista4/lista4.06/lista4.06.c

mdc_euclides.o: lista4/lista4.06/mdc_euclides.c
	gcc -o $(path_obj)mdc_euclides.o -c lista4/lista4.06/mdc_euclides.c

# Bloco para compilar questão 4 - lista 1
lista1.04: lista1.04.o util.o
	gcc $(path_obj)lista1.04.o $(path_obj)util.o -o $(path_bin)lista1.04

lista1.04.o: lista1/lista1.04/lista1.04.c
	gcc -o $(path_obj)lista1.04.o -c lista1/lista1.04/lista1.04.c
	
# Bloco para compilar questão 10 - lista 3
lista3.10: lista3.10.o funcao.o
	gcc $(path_obj)lista3.10.o $(path_obj)funcao.o -o $(path_bin)lista3.10

lista3.10.o: lista3/lista3.10/lista3.10.c
	gcc -o $(path_obj)lista3.10.o -c lista3/lista3.10/lista3.10.c

funcao.o: lista3/lista3.10/funcao.o
	gcc -o $(path_obj)funcao.o -c lista3/lista3.10/funcao.c
	
# Bloco para compilar questão 05 - lista 2
lista2.05: lista2.05.o fu.o
	gcc $(path_obj)lista2.05.o $(path_obj)fu.o -o $(path_bin)lista2.05

lista2.05.o: lista2/lista2.05/lista2.05.c
	gcc -o $(path_obj)lista2.05.o -c lista2/lista2.05/lista2.05.c

fu.o: lista2/lista2.05/fu.c
	gcc -o $(path_obj)fu.o -c lista2/lista2.05/fu.c
	
# Bloco para compilar questão 02 - lista 4
lista4.02: lista4.02.o f.o
	gcc $(path_obj)lista4.02.o $(path_obj)f.o -o $(path_bin)lista4.02

lista4.02.o: lista4/lista4.02/lista4.02.c
	gcc -o $(path_obj)lista4.02.o -c lista4/lista4.02/lista4.02.c

f.o: lista4/lista4.02/f.c
	gcc -o $(path_obj)f.o -c lista4/lista4.02/fu.c



















#-------<Continue Aqui >-------

# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf $(path_obj)*.o

mrproper:
	rm -rf $(path_bin)*
