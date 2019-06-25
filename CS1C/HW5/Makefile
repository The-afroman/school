CC = g++
FLAGS =  -std=c++14 -Wall -g
OBJS =  

all: hw05

hw04: hw05.cpp objects
	$(CC) $(FLAGS) hw05.cpp -o hw05.out $(OBJS)

objects: 	
	$(CC) $(FLAGS) -c dateClass.cpp -o date.o
	$(CC) $(FLAGS) -c employeeClass.cpp -o employee.o
	$(CC) $(FLAGS) -c swArchitectClass.cpp -o architect.o
	$(CC) $(FLAGS) -c programmerClass.cpp -o programmer.o

clean:
	rm *.o *.out *.tar

tar:
	tar cf hw05.tar *.scr Makefile *.cpp *.h