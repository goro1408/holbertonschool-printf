#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: Character to print
 * Return: On success 1
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _print_string - Prints a string
 * @str: String to print
 * Return: Number of characters printed
 */
int _print_string(char *str)
{
    int count = 0;

    if (str == NULL)
        str = "(null)";
    while (*str)
    {
        count += _putchar(*str);
        str++;
    }
    return (count);
}

/**
 * _print_integer - Prints an integer
 * @n: Integer to print
 * Return: Number of characters printed
 */
int _print_integer(int n)
{
    int count = 0;
    char buffer[20];
    char *str = buffer;

    if (n < 0)
    {
        count += _putchar('-');
        n = -n;
    }

    do {
        *str++ = '0' + (n % 10);
        n /= 10;
    } while (n);

    while (--str >= buffer)
        count += _putchar(*str);

    return (count);
}

