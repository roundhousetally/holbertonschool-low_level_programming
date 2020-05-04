#!/bin/bash
gcc -Wall -Werror -fPIC *.c
gcc -shared -o liball.so *.o
