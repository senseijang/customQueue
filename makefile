CC = g++
CXXFLAGS = -std=c++11 -g

valgrind: fullQueue.o
	valgrind ./fullQueue.o

run: fullQueue
	./fullQueue.o

fullQueue: main queue
	g++ main.o Queue.o -o fullQueue.o

main: main.cpp
	${CC} ${CXXFLAGS} -c main.cpp

queue: Queue.cpp Queue.h
	${CC} ${CXXFLAGS} -c Queue.cpp

clean:
	rm *.o
