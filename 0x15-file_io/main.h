#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* header file to open a file */
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h> 

/*to close a file*/
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
