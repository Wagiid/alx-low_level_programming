#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the character written as an unsigned char
 *         Casted to an int. On error, returns -1.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

