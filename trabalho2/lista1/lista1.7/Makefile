main: main.o valor_pagamento.o
	gcc main.o valor_pagamento.o -o main
main.o: main.c
	gcc -c main.c
valor_pagamento.o:	valor_pagamento.c	util.h
	gcc -c valor_pagamento.c
clean:
	rm *.o
