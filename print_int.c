#include <unistd.h>

int print_int(int n)
{
    char buf[20];
    int i = 0, count = 0;
    long num = n;

    if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    if (num < 0)
    {
        write(1, "-", 1);
        count++;
        num = -num;
    }

    while (num > 0)
    {
        buf[i++] = (num % 10) + '0';
        num /= 10;
    }

    while (i--)
    {
        write(1, &buf[i], 1);
        count++;
    }

    return count;
}
