#!/bin/bash

# Compile all the .c files in the current directory into object files
gcc -c *.c

# Create the static library from the object files
ar rc liball.a *.o

# Clean up the object files
ranlib liball.a
