CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw08

hw08: hw08.cpp
	$(CC) $(FLAGS) hw08.cpp -o hw08.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw08.tar *.scr Makefile *.cpp