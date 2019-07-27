CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw15.out

hw15.out: hw15.cpp
	$(CC) $(FLAGS) hw15.cpp -o hw15.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw15.tar *.scr Makefile *.cpp *.h
