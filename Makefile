CC=g++
CFLAGS=-ggdb -Wall -pedantic

all: NoisySleeper

NoisySleeper: NoisySleeper.cpp main.cpp
	$(CC) $(CFLAGS) -o NoisySleeper main.cpp NoisySleeper.cpp

clean:
	rm -f NoisySleeper
