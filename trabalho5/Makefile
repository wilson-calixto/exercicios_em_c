all: lista5.02

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

#bloco da lista



## ===== TERMINA O BLOCO DAS QUESTOES =====
# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf $(path_obj)*.o

mrproper:
	rm -rf $(path_bin)*
