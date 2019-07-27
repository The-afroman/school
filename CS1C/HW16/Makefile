CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw16.out

hw16.out: hw16.cpp
	$(CC) $(FLAGS) hw16.cpp -o hw16.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw16.tar *.scr Makefile *.cpp *.h
