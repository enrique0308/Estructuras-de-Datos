tabla.o: tabla.c
	gcc tabla.c -c
main.o: main.c
	gcc main.c -c

tabla.out: main.o tabla.o
	gcc main.o -o tabla.out  tabla.o

run: tabla.out
	./tabla.out

clean:
	rm -f tabla.out main.o tabla.o
