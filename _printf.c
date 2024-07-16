#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                    count += _putchar(va_arg(args, int));
                    break;
                case 's':
                    count += _print_string(va_arg(args, char *));
                    break;
                case 'd':
                case 'i':
                    count += _print_integer(va_arg(args, int));
                    break;
                case '%':
                    count += _putchar('%');
                    break;
                default:
                    count += _putchar('%');
                    count += _putchar(*format);
                    break;
            }
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return (count);
}

