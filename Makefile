CC=g++

all : machine

machine : predictor.cpp computer.o outputter.o
	$(CC) -o machine predictor.cpp computer.o outputter.o
computer.o :  computer.h computer.cpp
	$(CC) -c -o computer.o computer.cpp
outputter.o : outputter.h outputter.cpp
	$(CC) -c -o outputter.o outputter.cpp

clean :
	rm -f machine predictor.o computer.o outputter.o

