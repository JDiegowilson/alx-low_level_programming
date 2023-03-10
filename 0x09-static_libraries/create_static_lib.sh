#!/bin/bash
gcc -Wall -Wextra -Werror  -pedanticc -c *.c
ar rc liball.a *.o
