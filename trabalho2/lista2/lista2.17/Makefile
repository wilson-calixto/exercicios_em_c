Values:		Values.o Greater_value.o Smaller_value.o
	gcc Values.o Greater_value.o Smaller_value.o -o Values

Values.o:	Values.c
	gcc -c Values.c

Greater_value.o:	Greater_value.c Values.h
	gcc -c Greater_value.c 

Smaller_value.o: 	Smaller_value.c Values.h
	gcc -c Smaller_value.c 

clean:
	rm *.o
