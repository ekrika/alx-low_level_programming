#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
char *rot13(char *);
void print_number(int n);
void print_buffer(char *b, int size);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif
