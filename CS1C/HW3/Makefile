CC = g++
FLAGS =  -std=c++14 -Wall -g
OBJS = date.o employee.o architect.o programmer.o 

all: hw03 hw03ec

hw03: hw03.cpp objects
	$(CC) $(FLAGS) hw03.cpp -o hw03.out $(OBJS)

hw03ec:
	$(CC) $(FLAGS) ec.cpp -o hw03ec.out 

objects: dateClass.cpp dateClass.h employeeClass.cpp employeeClass.h swArchitectClass.cpp swArchitectClass.h programmerClass.cpp programmerClass.h
	$(CC) $(FLAGS) -c dateClass.cpp -o date.o
	$(CC) $(FLAGS) -c employeeClass.cpp -o employee.o
	$(CC) $(FLAGS) -c swArchitectClass.cpp -o architect.o
	$(CC) $(FLAGS) -c programmerClass.cpp -o programmer.o

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw03.tar *.scr Makefile *.cpp *.h