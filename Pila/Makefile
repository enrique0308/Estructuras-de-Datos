pila.o: pila.c
	gcc pila.c -c
main.o: main.c
	gcc main.c -c

pila.out: main.o pila.o
	gcc main.o -o pila.out  pila.o

run: pila.out
	./pila.out

clean:
	rm -f pila main.o pila.o
