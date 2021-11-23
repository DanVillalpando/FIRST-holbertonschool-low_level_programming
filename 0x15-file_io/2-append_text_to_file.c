#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/***
 * Function that appends text at the end of a file
 */int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int file2;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

fd = open(filename, O_RDWR | O_APPEND, 0700);

if (fd == -1)
return (-1);

file2 = write(fd, text_content, strlen(text_content));
close(fd);

if (file2 == -1)
return (-1);

return (1);
}
