#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>

/** Mandatory prototypes  **/

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

/** Aux prototypes **/

unsigned int _slen(const char *num);
unsigned int myPow(unsigned int base,unsigned int exp);

#endif
