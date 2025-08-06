#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: the name to be printed
  * @f: pointer to a callback function that prints the name in a certain form
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
