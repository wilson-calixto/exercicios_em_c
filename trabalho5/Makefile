all: bin obj lista5.02 lista5.04 lista5.03 lista4.06 lista2.04 lista2.05 lista4.05 lista2.07 lista4.08 lista2.08 lista4.04 lista5.01 lista2.03 Permutacao lista4.06.2 quick parte2.07 parte2.09
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

lista5.02.o: parte1/lista5/lista5.02/lista5.02.c
	gcc -o $(path_obj)lista5.02.o -c parte1/lista5/lista5.02/lista5.02.c

strparaint.o: parte1/lista5/lista5.02/strparaint.c
	gcc -o $(path_obj)strparaint.o -c parte1/lista5/lista5.02/strparaint.c
	
#bloco da lista5.04
lista5.04: binary.o lista5.04.o
	gcc $(path_obj)lista5.04.o $(path_obj)binary.o -o $(path_bin)lista5.04

lista5.04.o: parte1/lista5/lista5.04/lista5.04.c
	gcc -o $(path_obj)lista5.04.o -c parte1/lista5/lista5.04/lista5.04.c

binary.o: parte1/lista5/lista5.04/binary.c
	gcc -o $(path_obj)binary.o -c parte1/lista5/lista5.04/binary.c
	
#bloco da lista2.04
lista2.04: lista2.04.o NumeroChar.o
	gcc $(path_obj)lista2.04.o $(path_obj)NumeroChar.o -o $(path_bin)lista2.04

lista2.04.o: parte1/lista2/lista2.04/lista2.04.c
	gcc -o $(path_obj)lista2.04.o -c parte1/lista2/lista2.04/lista2.04.c
	
NumeroChar.o: parte1/lista2/lista2.04/NumeroChar.c
	gcc -o $(path_obj)NumeroChar.o -c parte1/lista2/lista2.04/NumeroChar.c
	

#bloco da lista5.03
lista5.03: int2string.o lista5.03.o
	gcc $(path_obj)lista5.03.o $(path_obj)int2string.o -o $(path_bin)lista5.03

lista5.03.o: parte1/lista5/lista5.03/lista5.03.c
	gcc -o $(path_obj)lista5.03.o -c parte1/lista5/lista5.03/lista5.03.c

int2string.o: parte1/lista5/lista5.03/int2string.c
	gcc -o $(path_obj)int2string.o -c parte1/lista5/lista5.03/int2string.c
	
	
#bloco da lista4.06
lista4.06: sf_extend.o lista4.06.o
	gcc $(path_obj)lista4.06.o $(path_obj)sf_extend.o -o $(path_bin)lista4.06

lista4.06.o: parte1/lista4/lista4.06/lista4.06.c
	gcc -o $(path_obj)lista4.06.o -c parte1/lista4/lista4.06/lista4.06.c

sf_extend.o: parte1/lista4/lista4.06/sf_extend.c
	gcc -o $(path_obj)sf_extend.o -c parte1/lista4/lista4.06/sf_extend.c
	
	

#bloco da lista4.06.2
lista4.06.2: sf_extend.o lista4.06.2.o
	gcc $(path_obj)lista4.06.2.o $(path_obj)sf_extend.o -o $(path_bin)lista4.06.2

lista4.06.2.o: parte1/lista4/lista4.06/lista4.06.2.c
	gcc -o $(path_obj)lista4.06.2.o -c parte1/lista4/lista4.06/lista4.06.2.c

sf_extend.o: parte1/lista4/lista4.06/sf_extend.c
	gcc -o $(path_obj)sf_extend.o -c parte1/lista4/lista4.06/sf_extend.c



	
#bloco  da lista2.05
lista2.05: palindromo.o lista2.05.o
	gcc $(path_obj)lista2.05.o $(path_obj)palindromo.o -o $(path_bin)lista2.05

lista2.05.o: parte1/lista2/lista2.05/lista2.05.c
	gcc -o $(path_obj)lista2.05.o -c parte1/lista2/lista2.05/lista2.05.c

palindromo.o: parte1/lista2/lista2.05/palindromo.c
	gcc -o $(path_obj)palindromo.o -c parte1/lista2/lista2.05/palindromo.c

#bloco da lista4.05
lista4.05: position.o lista4.05.o
	gcc $(path_obj)lista4.05.o $(path_obj)position.o -o $(path_bin)lista4.05
	
lista4.05.o: parte1/lista4/lista4.05/lista4.05.c
	gcc -o $(path_obj)lista4.05.o -c parte1/lista4/lista4.05/lista4.05.c
	
position.o: parte1/lista4/lista4.05/position.c
	gcc -o $(path_obj)position.o -c parte1/lista4/lista4.05/position.c

#bloco da lista2.07
lista2.07: cont_str.o lista2.07.o
	gcc $(path_obj)lista2.07.o $(path_obj)cont_str.o -o $(path_bin)lista2.07
	
lista2.07.o: parte1/lista2/lista2.07/lista2.07.c
	gcc -o $(path_obj)lista2.07.o -c parte1/lista2/lista2.07/lista2.07.c
	
cont_str.o: parte1/lista2/lista2.07/cont_str.c
	gcc -o $(path_obj)cont_str.o -c parte1/lista2/lista2.07/cont_str.c

#bloco da lista4.08
lista4.08: string_copy.o lista4.08.o
	gcc $(path_obj)lista4.08.o $(path_obj)string_copy.o -o $(path_bin)lista4.08
	
lista4.08.o: parte1/lista4/lista4.08/lista4.08.c
	gcc -o $(path_obj)lista4.08.o -c parte1/lista4/lista4.08/lista4.08.c
	
string_copy.o: parte1/lista4/lista4.08/string_copy.c
	gcc -o $(path_obj)string_copy.o -c parte1/lista4/lista4.08/string_copy.c


#bloco da lista2.08
lista2.08: lista2.08.o esp.o
	gcc $(path_obj)lista2.08.o $(path_obj)esp.o -o $(path_bin)lista2.08
	
lista2.08.o: parte1/lista2/lista2.08/lista2.08.c
	gcc -o $(path_obj)lista2.08.o -c parte1/lista2/lista2.08/lista2.08.c
	
esp.o: parte1/lista2/lista2.08/esp.c
	gcc -o $(path_obj)esp.o -c parte1/lista2/lista2.08/esp.c


#bloco da lista4.04
lista4.04: lista4.04.o position.o
	gcc $(path_obj)lista4.04.o $(path_obj)position.o -o $(path_bin)lista4.04
	
lista4.04.o: parte1/lista4/lista4.04/lista4.04.c
	gcc -o $(path_obj)lista4.04.o -c parte1/lista4/lista4.04/lista4.04.c
	
position.o: parte1/lista4/lista4.04/position.c
	gcc -o $(path_obj)position.o -c parte1/lista4/lista4.04/position.c
	
	
#bloco da lista5.01
lista5.01: lista5.01.o
	gcc $(path_obj)lista5.01.o -o $(path_bin)lista5.01
	
lista5.01.o: parte1/lista5/lista5.01/lista5.01.c
	gcc -o $(path_obj)lista5.01.o -c parte1/lista5/lista5.01/lista5.01.c
	
#bloco da lista2.03
lista2.03: lista2.03.o
	gcc $(path_obj)lista2.03.o -o $(path_bin)lista2.03
	
lista2.03.o: parte1/lista2/lista2.03/lista2.03.c
	gcc -o $(path_obj)lista2.03.o -c parte1/lista2/lista2.03/lista2.03.c
	
#bloco da questao02
Permutacao: questao02.o Permutacao.o
	gcc $(path_obj)questao02.o $(path_obj)Permutacao.o -o $(path_bin)Permutacao
	
questao02.o: parte2/questao02/questao02.c
	gcc -o $(path_obj)questao02.o -c parte2/questao02/questao02.c
	
Permutacao.o: parte2/questao02/Permutacao.c
	gcc -o $(path_obj)Permutacao.o -c parte2/questao02/Permutacao.c 
	
#bloco da questao07
quick: mainbubblequick.o quick.o
	gcc $(path_obj)mainbubblequick.o $(path_obj)quick.o -o $(path_bin)quick
	
mainbubblequick.o: parte2/questao06/mainbubblequick.c
	gcc -o $(path_obj)mainbubblequick.o -c parte2/questao06/mainbubblequick.c
	
quick.o: parte2/questao06/quick.c
	gcc -o $(path_obj)quick.o -c parte2/questao06/quick.c
	
#bloco da questao exponenciao sucessiva -- parte2.07

parte2.07: expo.o parte2.07.o
	gcc $(path_obj)expo.o $(path_obj)parte2.07.o -o $(path_bin)parte2.07
	
parte2.07.o: parte2/questao07/parte2.07.c
	gcc -o $(path_obj)parte2.07.o -c parte2/questao07/parte2.07.c
	
expo.o: parte2/questao07/expo.c
	gcc -o $(path_obj)expo.o -c parte2/questao07/expo.c
	
#bloco da questao incremento sucessivo -- questao 09 parte 2

parte2.09: soma.o parte2.09.o
	gcc $(path_obj)soma.o $(path_obj)parte2.09.o -o $(path_bin)incremento
	
soma.o: parte2/questao07/soma.c
	gcc -o $(path_obj)soma.o -c parte2/questao07/soma.c
	
parte2.09.o: parte2/questao07/parte2.09.c
	gcc -o $(path_obj)parte2.09.o -c parte2/questao07/parte2.09.c
#----------------------------------------------------------------------------------
## ===== TERMINA O BLOCO DAS QUESTOES =====
# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf $(path_obj)*.o

mrproper:
	rm -rf $(path_bin)*
