cola.o: cola.c
	gcc cola.c -c
main.o: main.c
	gcc main.c -c

cola.out: main.o cola.o
	gcc main.o -o cola.out  cola.o

run: cola.out
	./cola.out

clean:
	rm -f cola main.o cola.o
