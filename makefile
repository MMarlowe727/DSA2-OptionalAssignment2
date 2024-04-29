CC = g++
CFLAGS = -Wall -g

main: main.o prim.o
	$(CC) $(CFLAGS) -o main main.o prim.hpp

main.o: main.cpp prim.hpp
	$(CC) $(CFLAGS) -c main.cpp

prim.o: prim.hpp

clean:
	rm -rf *.o main