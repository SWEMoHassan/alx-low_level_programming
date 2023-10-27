#!/bin/bash

# Create a static library from all the .c files
ar -rcs liball.a *.c

# Print a message to the user.
echo "Static library liball.a created successfully."
