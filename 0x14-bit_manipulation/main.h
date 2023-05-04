#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
/*
 *  File: main.h
 * Desc: This file contains the prototypes for all functions
 * written in this project directory.
 */

void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
int _atoi(const char *s);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
#endif /* MAIN_H */
