all: bin obj lista4.02

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

# Bloco para compilar a questão 02 - lista 04

lista4.02: lista4.02.o matrix.o
	gcc $(path_obj)lista4.02.o $(path_obj)matrix.o -o $(path_bin)lista4.02

lista4.02.o: lista4/lista4.02/lista4.02.c
	gcc -o $(path_obj)lista4.02.o -c lista4/lista4.02/lista4.02.c

matrix.o: lista4/lista4.02/matrix.c
	gcc -o $(path_obj)matrix.o -c lista4/lista4.02/matrix.c



#>>>> continue aqui <<<<


# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -o $(path_obj)util.o -c util.c/util.c

#Limpar objetos criados na compilação
clean:
	rm -rf $(path_obj)*.o

mrproper:
	rm -rf $(path_bin)*
