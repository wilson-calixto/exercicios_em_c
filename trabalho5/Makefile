all: bin obj lista5.02 lista5.04 lista5.03 lista4.06 lista2.04 lista2.05

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
	
	
#bloco da lista2.05
lista2.05: lista2.05.o palindromo.o
	gcc $(path_obj)lista2.05.o $(path_obj)palindromo.o -o $(path_bin)lista2.05

lista2.05.o: lista2/lista2.05/lista2.05.c
	gcc -o $(path_obj)lista2.05.o -c lista2/lista2.05/lista2.05.c
	
palindromo.o: lista2/lista2.05/palindromo.c
	gcc -o $(path_obj)palindromo.o -c lista2/lista2.05/palindromo.c	
	
	
	
	
## ===== TERMINA O BLOCO DAS QUESTOES =====
# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf $(path_obj)*.o

mrproper:
	rm -rf $(path_bin)*
