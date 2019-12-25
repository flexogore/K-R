#include <stdio.h>

int main()
{
    int c;
    int blanks = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (blanks == 0)
            {
                putchar(c);
                blanks++;
            }
            else
                continue;
        }
        else
        {
            blanks = 0;
            putchar(c);
        }
        
    }
}
