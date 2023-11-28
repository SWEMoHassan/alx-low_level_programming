#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1024

/**
 * Copies the content of a file to another file.
 * @param file_from: The file to read from.
 * @param file_to: The file to write to.
 * @return: 0 on success, -1 on error.
 */
int copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
char buf[BUF_SIZE];
int bytes_read;
fd_from = open(file_from, O_RDONLY);
if (fd_from < 0)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
return (-1);
}
fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (fd_to < 0)
{
dprintf(2, "Error: Can't write to file %s\n", file_to);
close(fd_from);
return (-1);
}
while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
if (write(fd_to, buf, bytes_read) < 0) {
dprintf(2, "Error: Can't write to file %s\n", file_to);
close(fd_from);
close(fd_to);
return (-1);
}
}
if (close(fd_from) < 0)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
return (-1);
}
if (close(fd_to) < 0)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
return (-1);
}
return (0);
}
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
return (97);
}
if (copy_file(argv[1], argv[2]) < 0)
{
return (99);
}
return (0);
}
