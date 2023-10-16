#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 5

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

int i;
for (i = 0; i < length; ++i)
{
int index = rand() % charset_length;
password[i] = charset[index];
}

password[length] = '\0';
}

int main(void) {
char password[PASSWORD_LENGTH + 1];

generate_password(password, PASSWORD_LENGTH);
printf("Generated Password: %s\n", password);

return (0);
}

