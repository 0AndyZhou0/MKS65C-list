all : list.c list.h
	gcc -o list list.c

run : list
	./list
