<<<<<<< HEAD
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual bytes read and printed
 * 0 when function fails or filename is Null
=======
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
>>>>>>> 30a2641428e354f9b894d80f3ebf989323217b0d
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
<<<<<<< HEAD
	ssize_t r;
=======
	ssize_t t;
>>>>>>> 30a2641428e354f9b894d80f3ebf989323217b0d

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
<<<<<<< HEAD
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
=======
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

>>>>>>> 30a2641428e354f9b894d80f3ebf989323217b0d
	free(buf);
	close(fd);
	return (w);
}
