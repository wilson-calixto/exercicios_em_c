all: agenda

agenda: agenda.o pesquisa.o lista.o edita.o cria_agenda_arquivo.o apaga.o copia.o limpa_arquivo.o i_o.o
	gcc agenda.o lista.o pesquisa.o edita.o cria_agenda_arquivo.o apaga.o copia.o limpa_arquivo.o i_o.o -o agenda

agenda.o: agenda.c
	gcc -c agenda.c

lista.o: lista.c
	gcc -c lista.c

pesquiso.o: pesquisa.c
	gcc -c pesquisa.c

edita.o: edita.c
	gcc -c edita.c

cria_agenda_arquivo.o: cria_agenda_arquivo.c
	gcc -c cria_agenda_arquivo.c

apaga.o: apaga.c
	gcc -c apaga.c

copia.o: copia.c
	gcc -c copia.c

limpa_arquivo.o: limpa_arquivo.c
	gcc -c  limpa_arquivo.c

i_o.o: i_o.c
	gcc -c i_o.c

clear:
	rm -rf *.o

clean:
	rm -rf Agenda.txt Agenda.txt.editado

mr: clear
	rm -rf agenda Agenda.txt *.editado
