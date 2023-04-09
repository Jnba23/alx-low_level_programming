#!/bin/bash
# to compile all library codes (*.c) into object file //
gcc -c -Wall -Werror -Wextra *.c

# to bundle all object files within the current directory into one static library liball.a
ar rc liball.a *.c

# to indexate the library
ranlib liball.a

