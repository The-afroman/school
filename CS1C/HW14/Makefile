CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw14.out

hw14.out: hw14.cpp
	$(CC) $(FLAGS) hw14.cpp -o hw14.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw14.tar *.scr Makefile *.cpp *.h
