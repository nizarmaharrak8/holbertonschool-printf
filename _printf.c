#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    char c;

    if (!format || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;

            if (format[i] == 'c')
            {
                c = va_arg(args, int);
                write(1, &c, 1);
            }
        }
        else
        {
            write(1, &format[i], 1);
        }

        i++;
    }

    va_end(args);
    return (0);
}
if (format[*i] == 's')
return (print_string(va_arg(args, char *)));
if (format[*i] == '%')
{
write(1, "%", 1);
return (1)
}
write(1, "%", 1);
write(1, &format[*i], 1);
return (2);
}























