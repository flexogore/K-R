/* prints out reversed input lines */

#include <stdio.h>
#define MAXLINE 1000

int length(char line[], int maxline);
void reverse(char line[]);

int main()
{
    char line[MAXLINE];
    reverse(line);
}

int length(char s[], int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') 
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char line[])
{
    int len = length(line, MAXLINE);

    for (int i = len - 1; i >= 0; i--)
        printf("%c", line[i]);

    printf("\n");
}
