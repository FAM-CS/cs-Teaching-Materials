CC = g++ -std=c++11 -g
exe_file = app

all: $(exe_file)

$(exe_file): pokemon.o bulbasaur.o driver.cpp
	$(CC) pokemon.o bulbasaur.o driver.cpp -o $(exe_file)

pokemon.o: pokemon.h pokemon.cpp
	$(CC) -c pokemon.cpp
bulbasaur.o: bulbasaur.h bulbasaur.cpp pokemon.o
	$(CC) -c bulbasaur.cpp

clean:
	rm -f *.out *.o $(exe_file)

zip:
	zip lab7_demo.zip *.cpp *.h Makefile