#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * int main content goes into this place
 * set initialize the varable a = 97
 * loop through the varable as long as the 
 * varableis not greater than == 123
 * Return (0) if the result is successful
 */

int main(void)
{
char ch = 97;
while (ch != 123 )
{
putchar(ch);
putchar(toupper(ch));
ch++;
}
putchar("\n")'
return (0);
}
