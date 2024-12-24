#makefile with static library

.PHONY: liba testliba clean

liba: libfun.a
libfun.a: max.o min.o
	ar cr $@ max.o min.o
max.o: max.c
	gcc -c max.c
min.o: min.c
	gcc -c min.c

testliba: main.out
main.out: main.c
	gcc main.c -L. -lfun -o main.out

clean:
	rm -f *.o *.a
