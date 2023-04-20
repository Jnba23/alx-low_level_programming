#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif

