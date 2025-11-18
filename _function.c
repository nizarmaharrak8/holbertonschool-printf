#include "main.h"



int print_string(char *s)
{
int len;

if (!s)
s = "(null)";
len = strlen(s);
write(1, s, len);
return (len);

}
