#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/***
 * Creates a file
 */int create_file(const char *filename, char *text_content)
{
int fd;
int file;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

if (fd == -1)
{
return (-1);
}

if (text_content == NULL)
{
return (1);
}

file = write(fd, text_content, strlen(text_content));
close(fd);
if (file == -1)
{
close(fd);
return (-1);
}

return (1);
}
