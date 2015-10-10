all: bin obj lista5.02 lista5.04 lista5.03 lista4.06 lista2.04 lista2.05 lista4.05 lista2.07 lista4.08 lista2.08 lista4.04 lista5.01 lista2.03 Permutacao lista4.06.2 quick lista5.2.062
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


##COMEÇA OS BLOCOS DAS QUESTOES	

#bloco da lista5.02
lista5.02: strparaint.o lista5.02.o
	gcc $(path_obj)lista5.02.o $(path_obj)strparaint.o -o $(path_bin)lista5.02

lista5.02.o: lista5/lista5.02/lista5.02.c
	gcc -o $(path_obj)lista5.02.o -c lista5/lista5.02/lista5.02.c

strparaint.o: lista5/lista5.02/strparaint.c
	gcc -o $(path_obj)strparaint.o -c lista5/lista5.02/strparaint.c
	
#bloco da lista5.04
lista5.04: binary.o lista5.04.o
	gcc $(path_obj)lista5.04.o $(path_obj)binary.o -o $(path_bin)lista5.04

lista5.04.o: lista5/lista5.04/lista5.04.c
	gcc -o $(path_obj)lista5.04.o -c lista5/lista5.04/lista5.04.c

binary.o: lista5/lista5.04/binary.c
	gcc -o $(path_obj)binary.o -c lista5/lista5.04/binary.c
	
#bloco da lista2.04
lista2.04: lista2.04.o NumeroChar.o
	gcc $(path_obj)lista2.04.o $(path_obj)NumeroChar.o -o $(path_bin)lista2.04

lista2.04.o: lista2/lista2.04/lista2.04.c
	gcc -o $(path_obj)lista2.04.o -c lista2/lista2.04/lista2.04.c
	
NumeroChar.o: lista2/lista2.04/NumeroChar.c
	gcc -o $(path_obj)NumeroChar.o -c lista2/lista2.04/NumeroChar.c
	

#bloco da lista5.03
lista5.03: int2string.o lista5.03.o
	gcc $(path_obj)lista5.03.o $(path_obj)int2string.o -o $(path_bin)lista5.03

lista5.03.o: lista5/lista5.03/lista5.03.c
	gcc -o $(path_obj)lista5.03.o -c lista5/lista5.03/lista5.03.c

int2string.o: lista5/lista5.03/int2string.c
	gcc -o $(path_obj)int2string.o -c lista5/lista5.03/int2string.c
	
	
#bloco da lista4.06
lista4.06: sf_extend.o lista4.06.o
	gcc $(path_obj)lista4.06.o $(path_obj)sf_extend.o -o $(path_bin)lista4.06

lista4.06.o: lista4/lista4.06/lista4.06.c
	gcc -o $(path_obj)lista4.06.o -c lista4/lista4.06/lista4.06.c

sf_extend.o: lista4/lista4.06/sf_extend.c
	gcc -o $(path_obj)sf_extend.o -c lista4/lista4.06/sf_extend.c
	
	

#bloco da lista4.06.2
lista4.06.2: sf_extend.o lista4.06.2.o
	gcc $(path_obj)lista4.06.2.o $(path_obj)sf_extend.o -o $(path_bin)lista4.06.2

lista4.06.2.o: lista4/lista4.06/lista4.06.2.c
	gcc -o $(path_obj)lista4.06.2.o -c lista4/lista4.06/lista4.06.2.c

sf_extend.o: lista4/lista4.06/sf_extend.c
	gcc -o $(path_obj)sf_extend.o -c lista4/lista4.06/sf_extend.c



	
#bloco  da lista2.05
lista2.05: palindromo.o lista2.05.o
	gcc $(path_obj)lista2.05.o $(path_obj)palindromo.o -o $(path_bin)lista2.05

lista2.05.o: lista2/lista2.05/lista2.05.c
	gcc -o $(path_obj)lista2.05.o -c lista2/lista2.05/lista2.05.c

palindromo.o: lista2/lista2.05/palindromo.c
	gcc -o $(path_obj)palindromo.o -c lista2/lista2.05/palindromo.c

#bloco da lista4.05
lista4.05: position.o lista4.05.o
	gcc $(path_obj)lista4.05.o $(path_obj)position.o -o $(path_bin)lista4.05
	
lista4.05.o: lista4/lista4.05/lista4.05.c
	gcc -o $(path_obj)lista4.05.o -c lista4/lista4.05/lista4.05.c
	
position.o: lista4/lista4.05/position.c
	gcc -o $(path_obj)position.o -c lista4/lista4.05/position.c

#bloco da lista2.07
lista2.07: cont_str.o lista2.07.o
	gcc $(path_obj)lista2.07.o $(path_obj)cont_str.o -o $(path_bin)lista2.07
	
lista2.07.o: lista2/lista2.07/lista2.07.c
	gcc -o $(path_obj)lista2.07.o -c lista2/lista2.07/lista2.07.c
	
cont_str.o: lista2/lista2.07/cont_str.c
	gcc -o $(path_obj)cont_str.o -c lista2/lista2.07/cont_str.c

#bloco da lista4.08
lista4.08: string_copy.o lista4.08.o
	gcc $(path_obj)lista4.08.o $(path_obj)string_copy.o -o $(path_bin)lista4.08
	
lista4.08.o: lista4/lista4.08/lista4.08.c
	gcc -o $(path_obj)lista4.08.o -c lista4/lista4.08/lista4.08.c
	
string_copy.o: lista4/lista4.08/string_copy.c
	gcc -o $(path_obj)string_copy.o -c lista4/lista4.08/string_copy.c


#bloco da lista2.08
lista2.08: lista2.08.o esp.o
	gcc $(path_obj)lista2.08.o $(path_obj)esp.o -o $(path_bin)lista2.08
	
lista2.08.o: lista2/lista2.08/lista2.08.c
	gcc -o $(path_obj)lista2.08.o -c lista2/lista2.08/lista2.08.c
	
esp.o: lista2/lista2.08/esp.c
	gcc -o $(path_obj)esp.o -c lista2/lista2.08/esp.c


#bloco da lista4.04
lista4.04: lista4.04.o position.o
	gcc $(path_obj)lista4.04.o $(path_obj)position.o -o $(path_bin)lista4.04
	
lista4.04.o: lista4/lista4.04/lista4.04.c
	gcc -o $(path_obj)lista4.04.o -c lista4/lista4.04/lista4.04.c
	
position.o: lista4/lista4.04/position.c
	gcc -o $(path_obj)position.o -c lista4/lista4.04/position.c
	
	
#bloco da lista5.01
lista5.01: lista5.01.o
	gcc $(path_obj)lista5.01.o -o $(path_bin)lista5.01
	
lista5.01.o: lista5/lista5.01/lista5.01.c
	gcc -o $(path_obj)lista5.01.o -c lista5/lista5.01/lista5.01.c
	
#bloco da lista2.03
lista2.03: lista2.03.o
	gcc $(path_obj)lista2.03.o -o $(path_bin)lista2.03
	
lista2.03.o: lista2/lista2.03/lista2.03.c
	gcc -o $(path_obj)lista2.03.o -c lista2/lista2.03/lista2.03.c
	
#bloco da questao02
Permutacao: questao02.o Permutacao.o
	gcc $(path_obj)questao02.o $(path_obj)Permutacao.o -o $(path_bin)Permutacao
	
questao02.o: parte2/questao02/questao02.c
	gcc -o $(path_obj)questao02.o -c parte2/questao02/questao02.c
	
Permutacao.o: parte2/questao02/Permutacao.c
	gcc -o $(path_obj)Permutacao.o -c parte2/questao02/Permutacao.c 
	
#bloco da questao07
quick: m.o util.o
	gcc $(path_obj)m.o $(path_obj)util.o -o $(path_bin)quick
	
m.o: parte2/questao06/m.c
	gcc -o $(path_obj)m.o -c parte2/questao06/m.c
	
#bloco da questao062
main: main.o order.o
	gcc main.o order.o -o main

main.o: main.c
	gcc -c main.c

util.o: order.c
	gcc -c order.c

## ===== TERMINA O BLOCO DAS QUESTOES =====
# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf $(path_obj)*.o
 
mrproper:
	rm -rf $(path_bin)*
