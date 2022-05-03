#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* header file to open a file */
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h> 

/*to close a file*/
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
