CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw12

hw12: hw12.cpp
	$(CC) $(FLAGS) hw12.cpp -o hw12.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw12.tar *.scr Makefile *.cpp *.h