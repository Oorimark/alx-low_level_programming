#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int counter(const char *value, int len)
{
	int i, count;

	count = 0;
	for (i = 0; i < len; i++)
	{
		if (sizeof(value[i]) == 1)
		{
			count++;
		}
	}
	return (count);
}
/**
 * read_textfile - reads a file
 * @filename: name of the file
 * @letters: characters the file contains
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char * filename, size_t letters)
{
	int fd;
	char buf[letters];
	int letters_length;

	letters_length = counter(filename, letters);
	fd = open(filename, O_RDONLY, 06000);
	if (fd == -1 || filename == NULL)
	{
		return (0);
		exit(1);
	}
	read(fd, buf, letters - 1);
	buf[letters - 1] = '\0';
	close(fd);
	printf("%s", buf);
	return (letters_length);
}
