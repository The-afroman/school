CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hwEC.out

hwEC.out: hwEC.cpp
	$(CC) $(FLAGS) hwEC.cpp -o hwEC.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hwEC.tar *.scr Makefile *.cpp *.h
