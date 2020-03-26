#include <stdio.h>
#define MAX 1000
void escape(char s[]);
void reverse(char s[]);

int main()
{
  char s[MAX];
  int counter = 0;
  int c;

  while(((c = getchar()) != EOF) && counter < MAX)
    s[counter++] = c;

  if(c == EOF)
    s[counter] = '\0';

    escape(s);
}

void escape(char s[])
{
  char t[MAX];
  int counter_s, counter_t;
  counter_s = counter_t = 0;

  while(s[counter_s] != '\0')
  {
    if(s[counter_s] == '\n')
    {
      t[counter_t++] = '\\';
      t[counter_t] = 'n';
    }
    else if(s[counter_s] == '\t')
    {
      t[counter_t++] = '\\';
      t[counter_t] = 't';
    }
    else
      t[counter_t] = s[counter_s];

    counter_s++;
    counter_t++;
  }
  t[counter_t] = '\0';
  printf("%s\n", t);
}

void reverse(char s[])
{
  char t[MAX];
  int counter_s, counter_t;
  counter_s = counter_t = 0;

  while(s[counter_s] != '\0')
  {
    if(s[counter_s] == '\\' && s[counter_s + 1] == 'n')
    {
      t[counter_t] = '\n';
      counter_s++;
    }
    else if(s[counter_s] == '\\' && s[counter_s + 1] == 't')
    {
      t[counter_t] = '\t';
      counter_s++;
    }
    else
      t[counter_t] = s[counter_s];

    counter_s++;
    counter_t++;
  }
  t[counter_t] = '\0';
  printf("%s\n", t);
}
