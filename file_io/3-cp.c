#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void f_close(int fd, int fd_write);
/**
 * f_close - close the files
 * @fd: fd for first file
 * @fd_write: fd for second file
 */
void f_close(int fd, int fd_write)
{
int v_close = close(fd);
int v_close_write = close(fd_write);

if (v_close == -1 || v_close_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", v_close == -1 ?
fd : fd_write);
exit(100);
}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 *      97 if argc is not 3
 *      98 if file_from does not exist or cannot be read
 *      99 if file_to cannot be created or written to
 *      100 if file descriptor cannot be closed
*/
int main(int argc, char *argv[])
{
int fd, v_write, v_read, fd_write;
char *buf = malloc(sizeof(char) * 1024);

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
if (!buf)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(100);
}
fd = open(argv[1], O_RDONLY);
v_read = read(fd, buf, 1024);
fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (fd == -1 || v_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
v_write = write(fd_write, buf, v_read);
if (fd_write == -1 || v_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
v_read = read(fd, buf, 1024);
fd_write = open(argv[2], O_WRONLY | O_APPEND);
} while (v_read > 0);
free(buf);
f_close(fd, fd_write);
return (0);
}
