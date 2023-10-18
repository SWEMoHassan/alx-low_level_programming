#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific string to the standard error.
 * The string followed by new line and written using the write system call.
 * Return: 1 (error code)
 */


int main() {
  const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  int bytes_written = write(STDERR_FILENO, message, strlen(message));
  if (bytes_written != strlen(message)) {
    return 1;
  }
  return 0;
}
