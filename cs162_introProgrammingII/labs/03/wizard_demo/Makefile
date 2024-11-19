# Defining variables
CC = g++ -std=c++11 -g
# CFLAGS = -Wall -Werror -DDEBUG   	 # Uncomment to use: stronger warnings and converts warnings into errors
EXE_FILE = demo

# target: <list of dependencies (optional)>
# 	<commands>

# "make" will run first target unless you specify "make <target>"
# 	   general practice is have one named "all"
# You can do "make run" to run your executable or "make test" to use valgrind

all: $(EXE_FILE)

run:
	./$(EXE_FILE)
test:
	valgrind --leak-check=yes --show-leak-kinds=all ./$(EXE_FILE)

# object files need to be compiled with "-c"
wizard.o: wizard.cpp wizard.h
	$(CC) $(CFLAGS) -c wizard.cpp

$(EXE_FILE): demo_wizard.cpp wizard.o
	$(CC) $(CFLAGS) demo_wizard.cpp wizard.o -o $(EXE_FILE)


# Delete all executables and object files
clean:
	rm -f *.out *.o $(EXE_FILE)
