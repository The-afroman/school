CC = g++
FLAGS =  -std=c++14 -Wall -g

all: hw10

hw10: hw10.cpp
	$(CC) $(FLAGS) hw10.cpp -o hw10.out

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw10.tar *.scr Makefile hw10.cpp