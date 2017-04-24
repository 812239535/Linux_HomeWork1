main:main.o sum.o subtract.o divide.o multiply.o
	gcc main.o sum.o subtract.o divide.o multiply.o -o main
main.o:main.c
	gcc -c main.c
sum.o:sum.c
	gcc -c sum.c
multiply.o:multiply.c
	gcc -c multiply.c
divide.o:divide.c
	gcc -c divide.c
subtract.o:subtract.c
	gcc -c subtract.c

clean:
	rm main *.o
