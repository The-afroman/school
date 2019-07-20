CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw13

hw13: hw13.cpp
	$(CC) $(FLAGS) hw13.cpp -o hw13.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw13.tar *.scr Makefile *.cpp *.h
