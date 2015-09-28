all: bin obj lista1.04  lista2.18 lista4.05 lista2.08 lista3.05 lista3.10 lista2.13 lista3.15 lista2.03 lista4.10 lista1.09 lista1.14 lista3.02 lista4.02 lista4.7 lista2.02 lista2.07 lista2.12 lista2.17 lista3.04 lista3.09 lista3.14 lista4.04 lista4.09.a lista4.09.b lista2.10 lista2.15 lista2.06 lista2.11 lista4.03 lista1.01 lista2.01 lista2.16 lista3.03 lista3.08 lista3.13a Produto_Escalar lista2.9 lista2.14 Produto q3.6 lista3.11 Intersecao q41b lista4.6 q4.11.a q411b

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
lista1.04: lista1.04.o preencher.o 
	gcc $(path_obj)lista1.04.o $(path_obj)preencher.o -o $(path_bin)lista1.04

lista1.04.o: lista1/lista1.04/lista1.04.c
	gcc -o $(path_obj)lista1.04.o -c lista1/lista1.04/lista1.04.c

preencher.o: lista1/lista1.04/preencher.c
	gcc -o $(path_obj)preencher.o -c lista1/lista1.04/preencher.c

# Bloco para compilar a questão 18 - lista 02
lista2.18: lista2.18.o p.o 
	gcc $(path_obj)lista2.18.o $(path_obj)p.o -o $(path_bin)lista2.18

lista2.18.o: lista2/lista2.18/lista2.18.c
	gcc -o $(path_obj)lista2.18.o -c lista2/lista2.18/lista2.18.c
p.o: lista2/lista2.18/p.c
	gcc -o $(path_obj)p.o -c lista2/lista2.18/p.c

# Bloco para compilar a questão 10 - lista 04
lista4.10: lista4.10.o derivada.o
	gcc $(path_obj)lista4.10.o derivada.o -o $(path_bin)lista4.10 -lm

lista4.10.o: lista4/lista4.10/lista4.10.c
	gcc -o $(path_obj)lista4.10.o -c lista4/lista4.10/lista4.10.c

derivada.o: lista4/lista4.05/derivada.c
	gcc -o $(path_obj)derivada.o -c lista4/lista4.10/derivada.c


# Bloco para compilar a questão 05 - lista 04
lista4.05: lista4.05.o util5.o 
	gcc $(path_obj)lista4.05.o $(path_obj)util5.o -o $(path_bin)lista4.05

lista4.05.o: lista4/lista4.05/lista4.05.c
	gcc -o $(path_obj)lista4.05.o -c lista4/lista4.05/lista4.05.c

util5.o: lista4/lista4.05/util.c
	gcc -o $(path_obj)util5.o -c lista4/lista4.05/util.c

# Bloco para compilar a questão 08 - lista 02
lista2.08: lista2.8.o 
	gcc $(path_obj)lista2.8.o -o $(path_bin)lista2.08

lista2.8.o: lista2/lista2.08/lista2.8.c
	gcc -o $(path_obj)lista2.8.o -c lista2/lista2.08/lista2.8.c

# Bloco para compilar a questão 05 - lista 03
lista3.05: lista3.5.o util51.o 
	gcc $(path_obj)lista3.5.o $(path_obj)util51.o -o $(path_bin)lista3.05

lista3.5.o: lista3/lista3.05/lista3.5.c
	gcc -o $(path_obj)lista3.5.o -c lista3/lista3.05/lista3.5.c

util51.o: lista3/lista3.05/funcao.c
	gcc -o $(path_obj)util51.o -c lista3/lista3.05/funcao.c

# Bloco para compilar a questão 10 - lista 03
lista3.10: lista3.10.o util52.o 
	gcc $(path_obj)lista3.10.o $(path_obj)util52.o -o $(path_bin)lista3.10

lista3.10.o: lista3/lista3.10/lista3.10.c
	gcc -o $(path_obj)lista3.10.o -c lista3/lista3.10/lista3.10.c

util52.o: lista3/lista3.10/funcao.c
	gcc -o $(path_obj)util52.o -c lista3/lista3.10/funcao.c	

# Bloco para compilar a questão 13 - lista 02
lista2.13: lista2.13.o 
	gcc $(path_obj)lista2.13.o -o $(path_bin)lista2.13

lista2.13.o: lista2/lista2.13/lista2.13.c
	gcc -o $(path_obj)lista2.13.o -c lista2/lista2.13/lista2.13.c

# Bloco para compilar a questão 03 - lista 02
lista2.03: lista2.03.o 
	gcc $(path_obj)lista2.03.o -o $(path_bin)lista2.03

lista2.03.o: lista2/lista2.03/lista2.03.c
	gcc -o $(path_obj)lista2.03.o -c lista2/lista2.03/lista2.03.c

# Bloco para compilar a questão 15 - lista 03
lista3.15: lista3.15.o util53.o 
	gcc $(path_obj)lista3.15.o $(path_obj)util53.o -o $(path_bin)lista3.15

lista3.15.o: lista3/lista3.15/lista3.15.c
	gcc -o $(path_obj)lista3.15.o -c lista3/lista3.15/lista3.15.c

util53.o: lista3/lista3.15/matriz.c
	gcc -o $(path_obj)util53.o -c lista3/lista3.15/matriz.c	



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



#Bloca para compilar a questão 10 - lista 02
lista2.10: lista2.10.o 2.10.o
	gcc  $(path_obj)lista2.10.o  $(path_obj)2.10.o -o  $(path_bin)l2.10
	
lista2.10.o: lista2/lista2.10/lista2.10.c
	gcc -o  $(path_obj)lista2.10.o -c lista2/lista2.10/lista2.10.c
	
2.10.o: lista2/lista2.10/2.10.c
	gcc -o $(path_obj)2.10.o -c lista2/lista2.10/2.10.c
	

# Bloco para compilar a questão 07 - lista 04
lista4.7: lista4.7.o sets_ab.o
	gcc $(path_obj)lista4.7.o $(path_obj)sets_ab.o -o $(path_bin)lista4.7

lista4.7.o: lista4/lista4.07/lista4.7.c
	gcc -o $(path_obj)lista4.7.o -c lista4/lista4.07/lista4.7.c

sets_ab.o: lista4/lista4.07/sets_ab.c
	gcc -o $(path_obj)sets_ab.o -c lista4/lista4.07/sets_ab.c


#questoes grupo rai

# Bloco para compilar a questao 01 - lista01
lista1.01:lista1.01.o
	gcc $(path_obj)lista1.01.o -o $(path_bin)lista1.01

lista1.01.o:lista1/lista1.01/lista1.1.c
	gcc -o $(path_obj)lista1.01.o -c lista1/lista1.01/lista1.1.c

# Bloco para compilar a questao 06 - lista01
lista1.06:lista1.06.o
	gcc $(path_obj)lista1.06.o -o $(path_bin)lista1.06

lista1.06.o:lista1/lista1.06/lista1.6.c
	gcc -o $(path_obj)lista1.06.o -c lista1/lista1.06/lista1.6.c

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
	gcc -o $(path_obj)lista2.17.o -c lista2/lista2.17/lista2.17.c

flista2.17.o: lista2/lista2.17/flista2.17.c
	gcc -o $(path_obj)flista2.17.o -c lista2/lista2.17/flista2.17.c


#lista3

#bloco para compilar a questao 04 - lista 03
lista3.04: lista3.04.o tt.o
	gcc $(path_obj)lista3.04.o $(path_obj)tt.o -o $(path_bin)lista3.04

lista3.04.o: lista3/lista3.04/lista3.04.c
	gcc -o $(path_obj)lista3.04.o -c lista3/lista3.04/lista3.04.c

tt.o: lista3/lista3.04/tt.c
	gcc -o $(path_obj)tt.o -c lista3/lista3.04/tt.c


#bloco para compilar a questao 09 - lista 03
lista3.09: lista3.09.o
	gcc $(path_obj)lista3.09.o -o $(path_bin)lista3.04

lista3.09.o: lista3/lista3.09/lista3.09.c
	gcc -o $(path_obj)lista3.09.o -c lista3/lista3.09/lista3.09.c
	

#Bloco para compilar a questão 12 - lista 03

lista3.12: lista3.12.o empresa.o
	gcc $(path_obj)lista3.12.o $(path_obj)empresa.o -o $(path_bin)lista3.12
	
lista3.12.o: lista3/lista3.12/lista3.12.c
	gcc -o $(path_obj)lista3.12.o -c lista3/lista3.12/lista3.12.c
	
empresa.o: lista3/lista3.12/empresa.c 
	gcc -o $(path_obj)empresa.o -c lista3/lista3.12/empresa.c


# Bloco para compilar a questão 14 - lista 03
lista3.14: lista3.14.o flista3.14.o
	gcc $(path_obj)lista3.14.o $(path_obj)flista3.14.o -o $(path_bin)lista3.14

lista3.14.o: lista3/lista3.14/lista3.14.c
	gcc -o $(path_obj)lista3.14.o -c lista3/lista3.14/lista3.14.c

flista3.14.o: lista3/lista3.14/flista3.14.c
	gcc -o $(path_obj)flista3.14.o -c lista3/lista3.14/flista3.14.c


#lista4

# Bloco para compilar a questão 04 - lista 04
lista4.04: lista4.04.o ff.o
	gcc $(path_obj)lista4.04.o $(path_obj)ff.o -o $(path_bin)lista4.04

lista4.04.o: lista4/lista4.04/lista4.04.c
	gcc -o $(path_obj)lista4.04.o -c lista4/lista4.04/lista4.04.c

ff.o: lista4/lista4.04/ff.c
	gcc -o $(path_obj)ff.o -c lista4/lista4.04/ff.c


# Bloco para compilar as questoes 09.a 09.b - lista4
#09.a
lista4.09.a: la.o menor_do_vetor.o
	gcc $(path_obj)la.o $(path_obj)menor_do_vetor.o -o $(path_bin)lista4.09.a

la.o: lista4/lista4.09/la.c
	gcc -o $(path_obj)la.o -c lista4/lista4.09/la.c

#09.b
lista4.09.b:lb.o menor_do_vetor.o 
	gcc $(path_obj)lb.o $(path_obj)menor_do_vetor.o -o $(path_bin)lista4.09.b


lb.o:lista4/lista4.09/lb.c
	gcc -o $(path_obj)lb.o -c lista4/lista4.09/lb.c

menor_do_vetor.o: lista4/lista4.09/menor_do_vetor.c
	gcc -o $(path_obj)menor_do_vetor.o -c lista4/lista4.09/menor_do_vetor.c

#Bloco para compilar a questão 15 - lista 02
lista2.15: fl2.15.o lista2.15.o 
	gcc $(path_obj)lista2.15.o $(path_obj)fl2.15.o -o $(path_bin)lista2.15

lista2.15.o: lista2/lista2.15/lista2.15.c
	gcc -o $(path_obj)lista2.15.o -c lista2/lista2.15/lista2.15.c

fl2.15.o: lista2/lista2.15/fl2.15.c
	gcc -o $(path_obj)fl2.15.o -c lista2/lista2.15/fl2.15.c

#Bloco para compilar a questão 6 - lista 02

lista2.06: lista2.06.o util.o
	gcc $(path_obj)lista2.06.o $(path_obj)util.o -o $(path_bin)lista2.06

lista2.06.o: lista2/lista2.06/lista2.06.c
	gcc -o $(path_obj)lista2.06.o -c lista2/lista2.06/lista2.06.c

#Bloco para compilar a questão 11 - lista 02

lista2.11: lista2.11.o
	gcc $(path_obj)lista2.11.o -o $(path_bin)lista2.11

lista2.11.o: lista2/lista2.11/lista2.11.c
	gcc -o $(path_obj)lista2.11.o -c lista2/lista2.11/lista2.11.c

#Bloco para compilar a questão 3 - lista 04

lista4.03: lista4.03.o util.o
	gcc $(path_obj)lista4.03.o $(path_obj)util.o -o $(path_bin)lista4.03

lista4.03.o: lista4/lista4.03/lista4.03.c
	gcc -o $(path_obj)lista4.03.o -c lista4/lista4.03/lista4.03.c

#Bloco para compilar a questão 1 - lista 02

lista2.01: lista2.01.o util.o
	gcc $(path_obj)lista2.01.o $(path_obj)util.o -o $(path_bin)lista2.01

lista2.01.o: lista2/lista2.01/lista2.01.c
	gcc -o $(path_obj)lista2.01.o -c lista2/lista2.01/lista2.01.c

#Bloco para compilar a questão 16 - lista 02

lista2.16: lista2.16.o segmento.o
	gcc $(path_obj)lista2.16.o $(path_obj)segmento.o -o $(path_bin)lista2.16

lista2.16.o: lista2/lista2.16/lista2.16.c
	gcc -o $(path_obj)lista2.16.o -c lista2/lista2.16/lista2.16.c

segmento.o: lista2/lista2.16/segmento.c
	gcc -o $(path_obj)segmento.o -c lista2/lista2.16/segmento.c

#Bloco para compilar a questão 3 - lista 03

lista3.03: funcao.o lista3.03.o
	gcc $(path_obj)funcao.o $(path_obj)lista3.03.o -o $(path_bin)lista3.03

funcao.o: lista3/lista3.03/funcao.c
	gcc -o $(path_obj)funcao.o -c lista3/lista3.03/funcao.c

lista3.03.o: lista3/lista3.03/lista3.03.c
	gcc -o $(path_obj)lista3.03.o -c lista3/lista3.03/lista3.03.c

#Bloco para compilar a questão 8 - lista 03

lista3.08: comb.o lista3.08.o util.o	
	gcc $(path_obj)comb.o $(path_obj)lista3.08.o $(path_obj)util.o -o $(path_bin)lista3.08

comb.o: lista3/lista3.08/comb.c
	gcc -o $(path_obj)comb.o -c lista3/lista3.08/comb.c

lista3.08.o: lista3/lista3.08/lista3.08.c
	gcc -o $(path_obj)lista3.08.o -c lista3/lista3.08/lista3.08.c

#Bloco para compilar a questão 13 - lista 03

lista3.13a: lista3.13a.o insere_resultado.o pesq_matriz.o cria_tabela.o imprime_tabela.o gera_dados.o ordena_tabela.o
	gcc $(path_obj)lista3.13a.o $(path_obj)insere_resultado.o $(path_obj)pesq_matriz.o $(path_obj)cria_tabela.o $(path_obj)imprime_tabela.o $(path_obj)gera_dados.o $(path_obj)ordena_tabela.o   -o $(path_bin)lista3.13a

lista3.13a.o: lista3/lista3.13/lista3.13a.c
	gcc -o $(path_obj)lista3.13a.o -c lista3/lista3.13/lista3.13a.c
insere_resultado.o: lista3/lista3.13/insere_resultado.c
	gcc -o  $(path_obj)insere_resultado.o -c lista3/lista3.13/insere_resultado.c
pesq_matriz.o: lista3/lista3.13/pesq_matriz.c
	gcc -o $(path_obj)pesq_matriz.o -c lista3/lista3.13/pesq_matriz.c
cria_tabela.o: lista3/lista3.13/cria_tabela.o 
	gcc -o $(path_obj)cria_tabela.o -c lista3/lista3.13/cria_tabela.c
imprime_tabela.o: lista3/lista3.13/imprime_tabela.c
	gcc -o $(path_obj)imprime_tabela.o -c lista3/lista3.13/imprime_tabela.c
gera_dados.o: lista3/lista3.13/gera_dados.c
	gcc -o $(path_obj)gera_dados.o -c lista3/lista3.13/gera_dados.c
ordena_tabela.o: lista3/lista3.13/ordena_tabela.c
	gcc -o $(path_obj)ordena_tabela.o -c lista3/lista3.13/ordena_tabela.c
	
#Bloco para compilar a questão 8 - lista 04	

#a
lista4.08a: lista4.08a.o matriz_transposta.o util.o imprimi_matriz.o
	gcc $(path_obj)lista4.08a.o $(path_obj)matriz_transposta.o $(path_obj)util.o  -o $(path_bin)lista4.08a
lista4.08a.o: lista3/lista4.08/lista4.08a.c
	gcc -o $(path_obj)lista4.08a.o -c lista3/lista4.08/lista4.08a.c

##b
lista4.08b: lista4.08b.o  produto_escalar.o util.o
	gcc  $(path_obj)lista4.08b.o  $(path_obj)produto_escalar.o $(path_obj)util.o  -o $(path_bin)lista4.08b
lista4.08b.o: lista3/lista4.08/lista4.08b.c
	gcc -o $(path_obj)lista4.08b.o -c lista3/lista4.08/lista4.08b.c

##c
lista4.08c: lista4.08c.o  produto_matriz.o util.o matriz_transposta.o  imprimi_matriz.o
	gcc $(path_obj)lista4.08c.o   $(path_obj)produto_matriz.o $(path_obj)util.o $(path_obj)matriz_transposta.o  $(path_obj)imprimi_matriz.o  -o $(path_bin)lista4.08c
lista4.08c.o: lista3/lista4.08/lista4.08c.c
	gcc -o $(path_obj)lista4.08c.o -c lista3/lista4.08/lista4.08.c
produto_matriz.o: lista3/lista4.08/produto_matriz.c
	gcc -o $(path_obj)produto_matriz.o -c lista3/lista4.08/produto_matriz.c
produto_escalar.o: lista3/lista4.08/produto_escalar.c
	gcc -o $(path_obj)produto_escalar.o -c lista3/lista4.08/produto_escalar.c
matriz_transposta.o: lista3/lista4.08/matriz_transposta.c
	gcc -o $(path_obj)matriz_transposta.o -c lista3/lista4.08/matriz_transposta.c
imprimi_matriz.o: lista3/lista4.08/imprimi_matriz.c
	gcc -o $(path_obj)imprimi_matriz.o -c lista3/lista4.08/imprimi_matriz.c

##d
lista4.08d: lista4.08d.o matriz_identidade.o util.o 
	gcc $(path_obj)lista4.08d.o $(path_obj)matriz_identidade.o $(path_obj)util.o  -o $(path_bin)lista4.08d
lista4.08d.o: lista3/lista4.08/lista4.08d.c
	gcc -o $(path_obj)lista4.08d.o -c lista3/lista4.08/lista4.08d.c
matriz_identidade.o: lista3/lista4.08/matriz_identidade.c
	gcc -o $(path_obj)matriz_identidade.o -c lista3/lista4.08/matriz_identidade.c



#questoes do grupo Delrick 
# Bloco para compilar a questão 04 - lista 02

Produto_Escalar: lista2.04.o f2.4.o
	gcc $(path_obj)lista2.04.o $(path_obj)f2.4.o -o $(path_bin)Produto_Escalar 

lista2.04.o: lista2/lista2.04/lista2.04.c
	gcc -o $(path_obj)lista2.04.o -c lista2/lista2.04/lista2.04.c

f2.4.o: lista2/lista2.04/f2.4.c
	gcc -o $(path_obj)f2.4.o -c lista2/lista2.04/f2.4.c


# Bloco para compilar a questão 09 - lista 02

lista2.9:	lista2.9.o f2.9.o
	gcc $(path_obj)lista2.9.o $(path_obj)f2.9.o -o $(path_bin)lista2.9

lista2.9.o: lista2/lista2.09/lista2.9.c
	gcc -o $(path_obj)lista2.9.o -c lista2/lista2.09/lista2.9.c

f2.9.o:  lista2/lista2.09/f2.9.c	
	gcc -o $(path_obj)f2.9.o -c lista2/lista2.09/f2.9.c


# Bloco para compilar a questão 14 - lista 02

lista2.14: lista2.14.o f2.14.o
	gcc $(path_obj)lista2.14.o $(path_obj)f2.14.o -o $(path_bin)lista2.14

lista2.14.o: lista2/lista2.14/lista2.14.c
	gcc -o $(path_obj)lista2.14.o -c lista2/lista2.14/lista2.14.c

f2.14.o: lista2/lista2.14/f2.14.c
	gcc -o $(path_obj)f2.14.o -c lista2/lista2.14/f2.14.c


# Bloco para compilar a questão 01 - lista 03

Produto:	lista3.01.o f3.1.o
	gcc $(path_obj)lista3.01.o $(path_obj)f3.1.o -o $(path_bin)Produto

lista3.01.o:	lista3/lista3.01/lista3.01.c
	gcc -o $(path_obj)lista3.01.o -c lista3/lista3.01/lista3.01.c

f3.1.o:	lista3/lista3.01/f3.1.c
	gcc -o $(path_obj)f3.1.o -c lista3/lista3.01/f3.1.c


# Bloco para compilar a questão 06 - lista 03

q3.6: lista3.6.o f3.6.o
	gcc $(path_obj)lista3.6.o $(path_obj)f3.6.o -o $(path_bin)q3.6

lista3.6.o: lista3/lista3.06/lista3.6.c
	gcc -o $(path_obj)lista3.6.o -c  lista3/lista3.06/lista3.6.c

f3.6.o:  lista3/lista3.06/f3.6.c
	gcc -o $(path_obj)f3.6.o -c lista3/lista3.06/f3.6.c


# Bloco para compilar a questão 11 - lista 03

lista3.11: lista3.11.o f3.11.o
	gcc $(path_obj)lista3.11.o $(path_obj)f3.11.o -o $(path_bin)lista3.11

lista3.11.o:	lista3/lista3.11/lista3.11.c
	gcc -o $(path_obj)lista3.11.o -c lista3/lista3.11/lista3.11.c

f3.11.o: lista3/lista3.11/f3.11.c
	gcc -o $(path_obj)f3.11.o  -c lista3/lista3.11/f3.11.c


# Bloco para compilar a questão 01 - lista 04 - letra a

Intersecao:	lista4.01.a.o f4.1.a.o
	gcc $(path_obj)lista4.01.a.o $(path_obj)f4.1.a.o -o $(path_bin)Intersecao

lista4.01.a.o:	lista4/lista4.01/lista4.01.a/lista4.01.a.c
	gcc -o $(path_obj)lista4.01.a.o -c lista4/lista4.01/lista4.01.a/lista4.01.a.c

f4.1.a.o: lista4/lista4.01/lista4.01.a/f4.1.a.c 
	gcc -o $(path_obj)f4.1.a.o -c lista4/lista4.01/lista4.01.a/f4.1.a.c


# Bloco para compilar a questão 01 - lista 04 -letra b

q41b: q4.1.b.o f4.1.b.o
	gcc $(path_obj)q4.1.b.o $(path_obj)f4.1.b.o -o $(path_bin)q41b

q4.1.b.o: lista4/lista4.01/lista4.01.b/q4.1.b.c
	gcc -o $(path_obj)q4.1.b.o -c lista4/lista4.01/lista4.01.b/q4.1.b.c

f4.1.b.o: lista4/lista4.01/lista4.01.b/f4.1.b.c	
	gcc -o $(path_obj)f4.1.b.o -c lista4/lista4.01/lista4.01.b/f4.1.b.c


# Bloco para compilar a questão 06 - lista 04

lista4.6:	    lista4.6.o f4.6.o
	gcc $(path_obj)lista4.6.o $(path_obj)f4.6.o -o $(path_bin)lista4.6

lista4.6.o: lista4/lista4.06/lista4.6.c
	gcc -o $(path_obj)lista4.6.o -c lista4/lista4.06/lista4.6.c

f4.6.o:  lista4/lista4.06/f4.6.c
	gcc -o $(path_obj)f4.6.o -c lista4/lista4.06/f4.6.c


# Bloco para compilar a questão 11 - lista 04 - letra a 

q4.11.a: mainq4.11.o f4.11.o
	gcc $(path_obj)mainq4.11.o $(path_obj)f4.11.o -o $(path_bin)q4.11.a 

mainq4.11.o: lista4/lista4.11/questao_a/mainq4.11.c
	gcc -o $(path_obj)mainq4.11.o -c lista4/lista4.11/questao_a/mainq4.11.c

f4.11.o: lista4/lista4.11/questao_a/f4.11.c
	gcc -o $(path_obj)f4.11.o -c lista4/lista4.11/questao_a/f4.11.c


# Bloco para compilar a questão 06 - lista 04 - letra b

q411b: q4.11.b.o f4.11.b.o 
	gcc $(path_obj)q4.11.b.o $(path_obj)f4.11.b.o -o $(path_bin)q411b

q4.11.b.o: lista4/lista4.11/questao_b/q4.11.b.c
	gcc -o $(path_obj)q4.11.b.o -c lista4/lista4.11/questao_b/q4.11.b.c

f4.11.b.o: lista4/lista4.11/questao_b/f4.11.b.c
	gcc -o $(path_obj)f4.11.b.o -c lista4/lista4.11/questao_b/f4.11.b.c




# >>>> continue aqui <<<<


# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

#Limpar objetos criados na compilação
clean:
	rm -rf $(path_obj)*.
mrproper:
	rm -rf $(path_bin)*
