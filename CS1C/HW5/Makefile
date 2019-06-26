CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw05

hw05: hw05.cpp
	$(CC) $(FLAGS) hw05.cpp -o hw05.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw05.tar *.scr Makefile *.cpp *.h *.txt