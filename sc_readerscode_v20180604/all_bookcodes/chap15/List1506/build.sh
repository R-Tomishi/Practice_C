#!/bin/sh
gcc -c -o akagi.o akagi.c
gcc -c -o misaki.o misaki.c
gcc -o mainapp akagi.o misaki.o
