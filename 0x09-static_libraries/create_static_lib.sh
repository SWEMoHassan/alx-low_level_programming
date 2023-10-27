#!/bin/bash

# Create a static library from all the .c files in the current directory.
ar -rcs liball.a *.c

# Print a message to the user.
echo "Static library liball.a created successfully."
