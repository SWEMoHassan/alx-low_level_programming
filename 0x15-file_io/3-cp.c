#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFF_SIZE 1024

/**
 * exit_error - prints an error message and exits with a specific code
 * @code: the error code
 * @msg: the error message
 * @arg: the argument for the error message
 */
void exit_error(int code, char *msg, char *arg)
{
dprintf(STDERR_FILENO, msg, arg);
exit(code);
}
/**
 * cp_file - copies the content of one file to another
 * @file_from: the source file
 * @file_to: the destination file
 */
void cp_file(char *file_from, char *file_to)
{
int fd_from, fd_to, rd, wr;
char buffer[BUFF_SIZE];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
exit_error(98, "Error: Can't read from file %s\n", file_from);
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd_to == -1)
exit_error(99, "Error: Can't write to %s\n", file_to);
while ((rd = read(fd_from, buffer, BUFF_SIZE)) > 0)
{
wr = write(fd_to, buffer, rd);
if (wr == -1 || wr != rd)
exit_error(99, "Error: Can't write to %s\n", file_to);
}
if (rd == -1)
exit_error(98, "Error: Can't read from file %s\n", file_from);
if (close(fd_from) == -1)
{
char fd_msg[12];
sprintf(fd_msg, "%d", fd_from);
exit_error(100, "Error: Can't close fd %s\n", fd_msg);
}
if (close(fd_to) == -1)
{
char fd_msg[12];
sprintf(fd_msg, "%d", fd_to);
exit_error(100, "Error: Can't close fd %s\n", fd_msg);
}
}
/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
if (ac != 3)
exit_error(97, "Usage: %s file_from file_to\n", av[0]);
cp_file(av[1], av[2]);
return (0);
}
