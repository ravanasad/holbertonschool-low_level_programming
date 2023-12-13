#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 *	to the POSIX standard output
 * @filename: filename
 * @letters: letters
 * Return: if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write
 *	the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, w;
	char *buf = malloc(sizeof(char) * letters + 1);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	n = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, n);

	if (fd < 0 || n < 0 || w < 0 || w != n)
		w = 0;

	free(buf);
	close(fd);

	return (w);
}
