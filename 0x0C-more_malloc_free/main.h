#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void *malloc_checked(unsigned int b);

#endif /*MAIN_H*/

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *setmem(char *s, unsigned int size, char value);
