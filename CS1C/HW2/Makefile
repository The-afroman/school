CC = g++
FLAGS =  -std=c++14 -Wall
OBJS = deck.o

all: hw02 tar

hw02: hw02.cpp deck.o
	$(CC) $(FLAGS) hw02.cpp -o hw02.out $(OBJS)

deck.o: deckClass.cpp deckClass.h
	$(CC) $(FLAGS) -c deckClass.cpp -o deck.o

clean:
	rm *.o *.out *.tar

tar: hw02 script
	tar cf hw02.tar *.scr Makefile *.cpp *.h

script:
	script hw02.scr
