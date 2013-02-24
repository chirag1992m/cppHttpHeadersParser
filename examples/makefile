#Specifying the compiler
CC=g++
CFLAGS=-c

example1: http_requests_parser.o example1.o
	$(CC) http_requests_parser.o example1.o -o example1

example1.o: example1.cpp
	$(CC) $(CFLAGS) example1.cpp

http_requests_parser.o: ../http_requests_parser.cpp ../http_requests_parser.hpp
	$(CC) $(CFLAGS) ../http_requests_parser.cpp

clean:
	rm -rf *.o
