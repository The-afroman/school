CC = g++
FLAGS =  -std=c++14 -Wall -g
OBJS = inventory.o

all: hw07

hw07: hw07.cpp objs
	$(CC) $(FLAGS) hw07.cpp -o hw07.out $(OBJS)

objs: Item.cpp Item.h
	$(CC) $(FLAGS) -c Item.cpp -o inventory.o

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw07.tar *.scr Makefile *.cpp *.h