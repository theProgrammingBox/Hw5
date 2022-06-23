CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Main.o
FILES = Main.cpp Header.h

all: Hw5

Hw5: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o Hw5

Main.o: Main.cpp Header.h
	$(CC) $(FLAGS) -c Main.cpp

tar:
	tar -cf Hw3.tar Hw3.scr Makefile $(FILES)

clean:
	rm *.o *.tar *.scr Hw3

sudoClean:
	rm *.o *.scr Hw3