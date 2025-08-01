#ifndef MAIN_H
#define MAIN_H

void _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _wordcount(char *str);
int *_lettercount(int *letter_count, char *str);
void init_array(int *arr, int size);

#endif
