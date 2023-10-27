/**
 * main - Prints the name of the program, followed by a new line.
 *
 * Return: Always 0.
 */
extern char *argv[];
extern int _putchar(char c);
int main(void)
{
  char *program_name = argv[0];

  while (*program_name != '\0')
  {
    _putchar(*program_name);
    program_name++;
  }

  _putchar('\n');

  return (0);
}

