all: bin obj lista2.15 lista2.20 lista2.25

# Cria diretorio BIN
# Todos os arquivos binário estrão nesse diretório
bin:
	mkdir -p bin

obj:
	mkdir -p obj

path_bin = bin/
#path_obj = obj/

# Bloco para compilar questão 15 - lista 2
lista2.15: lista2.15.o calc_mean.o bin obj
	gcc lista2.15.o calc_mean.o -o $(path_bin)lista2.15

lista2.15.o: lista2/lista2.15/lista2.15.c
	gcc -c lista2/lista2.15/lista2.15.c

calc_mean.o: lista2/lista2.15/calc_mean.c
	gcc -c lista2/lista2.15/calc_mean.c

# Bloco para compilar questão 20 - lista 2
lista2.20: lista2.20.o calc_sum.o bin obj
	gcc lista2.20.o calc_sum.o -o $(path_bin)lista2.20

lista2.20.o: lista2/lista2.20/lista2.20.c
	gcc -c lista2/lista2.20/lista2.20.c

calc_sum.o: lista2/lista2.20/calc_sum.c
	gcc -c lista2/lista2.20/calc_sum.c

# Bloco para compilar questão 25 - lista 2
lista2.25: lista2.25.o util.o bin obj
	gcc lista2.25.o util.o -o $(path_bin)lista2.25

lista2.25.o: lista2/lista2.25/lista2.25.c
	gcc -c lista2/lista2.25/lista2.25.c

##

# Bloco referente a biblioteca UTIL
util.o: util.c/util.c
	gcc -c util.c/util.c

# Limpar objetos criados na complicação
clean:
	rm -rf *.o

mrproper:
	rm -rf $(path_bin)*
