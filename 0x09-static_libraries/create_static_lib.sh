#!/bin/bash
# to compile all library codes (*.c) into object file //
gcc -c -Wall -Werror -Wextra *.c

# to bundle all object files within the current directory into one indexated static library liball.a

ar rcs liball.a *.c

