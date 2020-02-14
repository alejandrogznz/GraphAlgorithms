GCC=g++ -std=c++11
INC=./include/
SRC=./src/
OBJ=Graph.o main.o

main: $(OBJ)
	$(GCC) $(OBJ) -o main

main.o: main.cpp
	$(GCC) -c main.cpp 

Graph.o: $(SRC)Graph.cpp 
	$(GCC) -c $(SRC)Graph.cpp

clean: 
	rm *.o main