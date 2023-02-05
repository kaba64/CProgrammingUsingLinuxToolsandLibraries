run: program.o
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.o -L. -lweather -o run
program.o: program.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c program.c -o program.o
launch: run
	./run
clean:
	rm -f weatherstats.o program.o run
