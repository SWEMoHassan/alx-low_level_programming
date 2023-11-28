#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

ssize_t read_write_files(int from_fd, int to_fd);

void error_handler(int code, char *file, int fd)
{
if (code == 97)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}
else if (code == 98)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
}
else if (code == 99)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
}
else if (code == 100)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
}
exit(code);
}
int main(int argc, char *argv[])
{
int from_fd, to_fd;
ssize_t bytes_copied;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to_fd == -1)
{
error_handler(99, argv[2], to_fd);
}
bytes_copied = read_write_files(from_fd, to_fd);
if (bytes_copied == -1)
{
error_handler(99, argv[2], to_fd);
}
if (close(from_fd) == -1 || close(to_fd) == -1)
{
error_handler(100, "", -1);
}
return (0);
}
ssize_t read_write_files(int from_fd, int to_fd)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written, total_bytes = 0;
while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(to_fd, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
return (-1);
}
total_bytes += bytes_written;
}
if (bytes_read == -1)
{
return (-1);
}
return (total_bytes);
}
