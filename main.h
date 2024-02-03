#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFSIZE 1025


/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int printpointer(va_list val);
int printunsigned(va_list args);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int printHEX(va_list val);
int printhex(va_list val);
int printoct(va_list val);
int printbin(va_list val);
int printrevs(va_list args);
int printrot13(va_list args);
int printi(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print37(void);
int printc(va_list val);
int print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
