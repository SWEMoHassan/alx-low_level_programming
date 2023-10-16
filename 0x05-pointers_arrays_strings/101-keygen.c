#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * generate_password - generates a random password for 101-crackme
 * @password: pointer to the password string
 * @length: length of the password
 */
void generate_password(char *password, int length)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int charset_length = strlen(charset);

srand(time(NULL));

for (int i = 0; i < length; ++i)
{
int index = rand() % charset_length;
password[i] = charset[index];
}

password[length] = '\0';
}

int main(void)
{
int password_length = 5;
char password[password_length + 1];

generate_password(password, password_length);
printf("Generated Password: %s\n", password);

return (0);
}

