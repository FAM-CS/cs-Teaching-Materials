CC = g++ -std=c++11 -g
exe_file = app

all: $(exe_file)

$(exe_file): pokemon.o bulbasaur.o charmander.o application.cpp 
	$(CC) pokemon.o bulbasaur.o charmander.o application.cpp -o $(exe_file)

# application.o: application.cpp
# 	$(CC) -c application.cpp
pokemon.o: pokemon.h pokemon.cpp
	$(CC) -c pokemon.cpp
bulbasaur.o: bulbasaur.h bulbasaur.cpp
	$(CC) -c bulbasaur.cpp
charmander.o: charmander.h charmander.cpp
	$(CC) -c charmander.cpp

clean:
	rm -f *.out *.o $(exe_file)
