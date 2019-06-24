CC = g++
FLAGS =  -std=c++14 -Wall -g
OBJS = date.o employee.o architect.o programmer.o 

all: hw04

hw04: hw04.cpp objects
	$(CC) $(FLAGS) hw04.cpp -o hw04.out $(OBJS)

objects: dateClass.cpp dateClass.h employeeClass.cpp employeeClass.h swArchitectClass.cpp swArchitectClass.h programmerClass.cpp programmerClass.h
	$(CC) $(FLAGS) -c dateClass.cpp -o date.o
	$(CC) $(FLAGS) -c employeeClass.cpp -o employee.o
	$(CC) $(FLAGS) -c swArchitectClass.cpp -o architect.o
	$(CC) $(FLAGS) -c programmerClass.cpp -o programmer.o

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw03.tar *.scr Makefile *.cpp *.h