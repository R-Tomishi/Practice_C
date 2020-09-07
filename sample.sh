#!/bin/sh
gcc -c -o practice31.o practice31.c
gcc -c -o practice31_1.o practice31_1.c
gcc -o mainapp practice31.o practice31_1.c
