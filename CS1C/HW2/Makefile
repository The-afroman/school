CC = g++
FLAGS =  -std=c++14 -Wall
OBJS = deck.o

all: hw02

hw02: hw02.cpp deck.o
	$(CC) $(FLAGS) hw02.cpp -o hw02.out $(OBJS)

deck.o: deckClass.cpp deckClass.h
	$(CC) $(FLAGS) -c deckClass.cpp -o deck.o

clean:
	rm *.o *.out *.tar

tar:
	tar cf hwo2.tar *.scr Makefile *.cpp *.h
