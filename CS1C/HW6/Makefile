CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw06

hw06: hw06.cpp
	$(CC) $(FLAGS) hw06.cpp -o hw06.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw06.tar *.scr Makefile *.cpp *.h