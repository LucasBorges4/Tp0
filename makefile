all:
	gcc -o saida picture.h picture.c main.c -lm
	make out

out:
	./saida