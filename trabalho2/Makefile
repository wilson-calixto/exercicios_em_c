all: bin obj lista1.02 lista2.03 lista1.07 lista1.10 lista2.11 lista3.d4 is_pos lista2.15 lista2.20 lista2.25 lista1.6 lista2.2 lista4.4.a desafio3 lista2.10 lista3.11 lista2.07 lista3.08 lista3.3 lista1.1 lista1.03 lista1.08 lista1.11 lista2.04 lista2.13 lista2.18 lista3.05  lista3.09 lista4.01a lista4.01b lista4.06 lista2.23 lista1.04 lista3.10 lista2.05 lista4.02 lista2.12 lista4.7 lista3.01 lista3.06 lista2.22 lista2.17 lista2.09 lista3desafio2 lista1.05 lista1.09 lista1.13 lista2.01 lista2.6 lista2.16 lista2.21 lista3.2
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
	gcc -o $(path_obj)f.o -c lista4/lista4.02/f.c
	
# Bloco para compilar questão 12 - lista 2
lista2.12: lista2.12.o func.lista2.12.o
	gcc $(path_obj)lista2.12.o $(path_obj)func.lista2.12.o -o $(path_bin)lista2.12

lista2.12.o: lista2/lista2.12/lista2.12.c
	gcc -o $(path_obj)lista2.12.o -c lista2/lista2.12/lista2.12.c

func.lista2.12.o: lista2/lista2.12/func.lista2.12.c
	gcc -o $(path_obj)func.lista2.12.o -c lista2/lista2.12/func.lista2.12.c
	
# Bloco para compilar questão 7 - lista 4
lista4.7: lista4.7.o func.lista4.7.o
	gcc $(path_obj)lista4.7.o $(path_obj)func.lista4.7.o -o $(path_bin)lista4.7

lista4.7.o: lista4/lista4.07/lista4.7.c
	gcc -o $(path_obj)lista4.7.o -c lista4/lista4.07/lista4.7.c

func.lista4.7.o: lista4/lista4.07/func.lista4.7.c
	gcc -o $(path_obj)func.lista2.12.o -c lista4/lista4.07/func.lista4.7.c
	
# Bloco para compilar questão 1 - lista 3
lista3.01: lista3.01.o util.o
	gcc $(path_obj)lista3.01.o $(path_obj)util.o -o $(path_bin)lista3.01

lista3.01.o: lista3/lista3.01/lista3.01.c
	gcc -o $(path_obj)lista3.01.o -c lista3/lista3.01/lista3.01.c

# Bloco para compilar questão 6 - lista 3
lista3.06: lista3.06.o util.o
	gcc $(path_obj)lista3.06.o $(path_obj)util.o -o $(path_bin)lista3.06

lista3.06.o: lista3/lista3.06/lista3.06.c
	gcc -o $(path_obj)lista3.06.o -c lista3/lista3.06/lista3.06.c
	
# Bloco para compilar questão 22 - lista 2
lista2.22: lista2.22.o Fatorial_Inverso.o
	gcc $(path_obj)lista2.22.o $(path_obj)Fatorial_Inverso.o -o $(path_bin)lista2.22

lista2.22.o: lista2/lista2.22/lista2.22.c
	gcc -o $(path_obj)lista2.22.o -c lista2/lista2.22/lista2.22.c

Fatorial_Inverso.o: lista2/lista2.22/Fatorial_Inverso.o
	gcc -o $(path_obj)Fatorial_Inverso.o -c lista2/lista2.22/Fatorial_Inverso.c

# Bloco para compilar questão 17 - lista 2
lista2.17: lista2.17.o Values.o
	gcc $(path_obj)lista2.17.o $(path_obj)Values.o -o $(path_bin)lista2.17

lista2.17.o: lista2/lista2.17/lista2.17.c
	gcc -o $(path_obj)lista2.17.o -c lista2/lista2.17/lista2.17.c

Values.o: lista2/lista2.17/Values.o
	gcc -o $(path_obj)Values.o -c lista2/lista2.17/Values.c

# Bloco para compilar questão 9 - lista 2
lista2.09: lista2.09.o util.o
	gcc $(path_obj)lista2.09.o $(path_obj)util.o -o $(path_bin)lista2.09

lista2.09.o: lista2/lista2.09/lista2.09.c
	gcc -o $(path_obj)lista2.09.o -c lista2/lista2.09/lista2.09.c

# Bloco para compilar desafio 2 - lista 3
lista3desafio2: lista3desafio2.o util.o
	gcc $(path_obj)lista3desafio2.o $(path_obj)util.o -o $(path_bin)lista3desafio2

lista3desafio2.o: lista3/desafio2/lista3desafio2.c
	gcc -o $(path_obj)lista3desafio2.o -c lista3/desafio2/lista3desafio2.c

#bloco para compilar lista1.02

lista1.02: lista1.02.o p.o
	gcc $(path_obj)lista1.02.o $(path_obj)p.o -o $(path_bin)lista1.02

lista1.02.o: lista1/lista1.02/lista1.02.c
	gcc -o $(path_obj)lista1.02.o -c lista1/lista1.02/lista1.02.c

p.o: lista1/lista1.02/p.o
	gcc -o $(path_obj)p.o -c lista1/lista1.02/p.c

#bloco para compilar lista1.07

lista1.07: lista1.07.o main.o
	gcc $(path_obj)lista1.07.o $(path_obj)main.o -o $(path_bin)lista1.07

lista1.07.o: lista1/lista1.07/lista1.07.c
	gcc -o $(path_obj)lista1.07.o -c lista1/lista1.07/lista1.07.c

main.o: lista1/lista1.07/main.o
	gcc -o $(path_obj)main.o -c lista1/lista1.07/main.c

#bloco para compilar lista1.10

main: main.o funcao.o
	gcc $(path_obj)main.o $(path_obj)funcao.o -o $(path_bin)main

main.o: lista1/lista1.10/main.c
	gcc -o $(path_obj)main.o -c lista1/lista1.10/main.c

funcao.o: lista1/lista1.10/funcao.o
	gcc -o $(path_obj)funcao.o -c lista1/lista1.07/funcao.c

#bloco para compilar lista2.03

lista2.3: function.o lista2.3.o
	gcc $(path_obj)lista2.3.o $(path_obj)function.o -o $(path_bin)lista2.3

lista2.3.o: lista2/lista2.03/lista2.3.c
	gcc -o $(path_obj)lista2.3.o -c lista2/lista2.03/lista2.3.c

function.o: lista2/lista2.03/function.o
	gcc -o $(path_obj)function.o -c lista2/lista2.03/function.c

#bloco para compilar lista2.08

is_pos: p.o is_pos.o
	gcc $(path_obj)is_pos.o $(path_obj)p.o -o $(path_bin)is_pos

is_pos.o: lista2/lista2.08/is_pos.c
	gcc -o $(path_obj)is_pos.o -c lista2/lista2.08/is_pos.c

p.o: lista2/lista2.08/p.o
	gcc -o $(path_obj)p.o -c lista2/lista2.08/p.c


#bloco para compilar lista2.11

lista2.11: p.o lista2.11.o
	gcc $(path_obj)lista2.11.o $(path_obj)p.o -o $(path_bin)lista2.11

lista2.11.o: lista2/lista2.11/lista2.11.c
	gcc -o $(path_obj)lista2.11.o -c lista2/lista2.11/lista2.11.c

p.o: lista2/lista2.11/p.o
	gcc -o $(path_obj)p.o -c lista2/lista2.11/p.c

#bloco para compilar ldesafio 4

lista3.d4: reverse.o lista3.d4.o
	gcc $(path_obj)lista3.d4.o $(path_obj)reverse.o -o $(path_bin)lista3.d4

lista3.d4.o: lista3/desafio4/lista3.d4.c
	gcc -o $(path_obj)lista3.d4.o -c lista3/desafio4/lista3.d4.c

reverse.o: lista3/desafio4/reverse.o
	gcc -o $(path_obj)reverse.o -c lista3/desafio4/reverse.c

#bloco para compilar lista1.05
lista1.5: sum_imp.o lista1.5.o 
	gcc $(path_obj)lista1.5.o $(path_obj))sum_imp.o -o $(path_bin)lista1.5

lista1.5.o: lista1/lista1.05/lista1.5.c
	gcc -o $(path_obj)lista1.5.o -c  lista1/lista1.05/lista1.5.c

sum_imp.o: lista1/lista1.05/sum_imp.c
	gcc -o $(path_obj)sum_imp.o -c  lista1/lista1.05/sum_imp.c

#bloco para compilar lista1.09
lista1.9: reverse_number.o lista1.9.o
	gcc $(path_obj)lista1.9.o $(path_obj))reverse_number.o -o $(path_bin)lista1.9
	
lista1.9.o: lista1/lista1.09/lista1.9.c
	gcc -o $(path_obj)lista1.9.o -c lista1/lista1.09/lista1.9.c
	
reverse_number.o: lista1/lista1.09/reverse_number.c
	gcc -o $(path_obj)reverse_number.o -c lista1/lista1.09/reverse_number.c

#bloco para compilar lista1.13
lista1.13: retangulo.o lista1.13.o
	gcc $(path_obj)lista1.13.o $(path_obj)retangulo.o -o $(path_bin)lista1.13
	
lista1.13.o: lista1/lista1.13/lista1.13.c
	gcc -o $(path_obj)lista1.13.o -c lista1/lista1.13/lista1.13.c
	
retangulo.o: lista1/lista1.13/retangulo.c retangulo.h
	gcc -o $(path_obj)retangulo.o -c lista1/lista1.13/retangulo.c
	
#bloco para compilar lista2.01
lista2.1: volume_esfera.o lista2.1.o util.o
	gcc $(path_obj)lista2.1.o $(path_obj)volume_esfera.o util.o  -o $(path_bin)lista2.1

lista2.1.o: lista2/lista2.01/lista2.1.c util.h
	gcc -o $(path_obj)lista2.1.o -c lista2/lista2.01/lista2.1.c

volume_esfera.o: lista2/lista2.01/vvolume_esfera.c
	gcc -o $(path_obj)volume_esfera.o -c lista2/lista2.01/volume_esfera.c 

#bloco para compilar lista2.06
lista2.6: idadedias.o lista2.6.o
	gcc $(path_obj)lista2.6.o $(path_obj)idadedias.o -o $(path_bin)lista2.6

lista2.6.o: lista2/lista2.06/lista2.6.c
	gcc -o $(path_obj)lista2.6.o-c lista2/lista2.06/lista2.6.c

idadedias.o: lista2/lista2.06/idadedias.c
	gcc -o $(path_obj)lista2.6.o -c lista2/lista2.06/idadedias.c 
	
#bloco para compilar lista2.16
lista2.16: funcao.o lista2.16.o
	gcc $(path_obj)lista2.16.o $(path_obj)funcao.o -o $(path_bin)lista2.16

lista2.16.o: lista2/lista2.16/lista2.16.c
	gcc -o $(path_obj)lista2.16.o-c lista2/lista2.16/lista2.16.c

funcao.o: lista2/lista2.16/funcao.c
	gcc -o $(path_obj)funcao.o -c lista2/lista2.16/funcao.c
	
#bloco para compilar lista2.21
lista2.21:funcao.o lista2.21.o
	gcc $(path_obj)funcao.o $(path_obj)lista2.21.o -o $(path_bin)lista2.21
funcao.o: lista2/lista2.21/funcao.c
	gcc -o $(path_obj)funcao.o -c lista2/lista2.21/funcao.c
lista2.21.o: lista2/lista2.21/lista2.21.c
	gcc -o $(path_obj)funcao.o -c lista2/lista2.21/lista2.21.c

#bloco para compilar lista3.02
lista3.2: lista3.2.o delta.o
	gcc $(path_obj)lista3.2.o $(path_obj)delta.o -o $(path_bin)lista3.2

lista3.2.o: lista3/lista3.02/lista3.2.c
	gcc -o $(path_obj)lista3.2.o -c lista3/lista3.02/lista3.2.c

delta.o: lista3/lista3.02/delta.c
	gcc -o $(path_obj)lista3.2.o -c lista3/lista3.02/delta.c

#bloco para compilar lista3.07


#bloco para compilar desafio03


#bloco para compilar lista4.03



#-------<Continue Aqui >-------

# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf $(path_obj)*.o

mrproper:
	rm -rf $(path_bin)*
