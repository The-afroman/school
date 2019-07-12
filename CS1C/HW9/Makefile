CC = g++
FLAGS =  -std=c++14 -Wall -g
OBJS = shapes.o

all: hw09

hw09: hw09.cpp objs
	$(CC) $(FLAGS) hw09.cpp -o hw09.out $(OBJS)

objs: shapes.cpp shapes.h
	$(CC) $(FLAGS) -c shapes.cpp -o shapes.o

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw08.tar *.scr Makefile *.cpp *.h