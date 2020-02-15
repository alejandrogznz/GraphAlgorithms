GCC=g++ -std=c++11
INC=./include/
SRC=./src/
OBJ=Graph.o DFS.o main.o

main: $(OBJ)
	$(GCC) $(OBJ) -o main

main.o: main.cpp
	$(GCC) -c main.cpp 

DFS.o: $(SRC)DFS.cpp
	$(GCC) -c $(SRC)DFS.cpp

Graph.o: $(SRC)Graph.cpp 
	$(GCC) -c $(SRC)Graph.cpp

clean: 
	rm *.o main