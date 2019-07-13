CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw11

hw11: hw11.cpp
	$(CC) $(FLAGS) hw11.cpp -o hw11.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw11.tar *.scr Makefile hw11.cpp