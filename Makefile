lista.o: lista.c
	gcc lista.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o lista.o
	gcc main.o -o lista.out  lista.o

run: lista.out
	./lista.out

clean:
	rm -f lista main.o lista.o
