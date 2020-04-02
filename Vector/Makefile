vector.o: vector.c
	gcc vector.c -c
main.o: main.c
	gcc main.c -c
vector.out: main.o vector.o
	gcc main.o -o vector.out  vector.o

run: vector.out
	./vector.out

clean:
	rm -f vector.out main.o vector.o

