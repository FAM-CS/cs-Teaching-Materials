# Define Makefile variables
CC = g++ -std=c++11 -g
# CFLAGS = -Wall -Werror    # Uncomment to use, stricter compiling
EXE_FILE = main

# Format:
# target: <prerequisites/dependencies (optional)>
#     <commands>
#     ...
#  ^  makefiles require tab indents here (throws error)

# run "make" with no target will do first target in makefile ("all" in this case)
all: $(EXE_FILE)

# Compile and link files into executable called $(EXE_FILE) (main)
main: main.cpp objectname.o
	$(CC) $(CFLAGS) main.cpp objectname.o -o $(EXE_FILE)

# Compile with "-c" flag to create object files
objectname.o: objectname.cpp objectname.h
	$(CC) $(CFLAGS) -c objectname.cpp

# run "make clean" to use this rule, also an example of how to run multiple commands
clean:
	rm -f *.o $(EXE_FILE)
	clear