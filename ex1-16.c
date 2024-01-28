#include <stdio.h>
#define MAXLINE 20 

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  len = 0;
  
  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max > 0){
    printf("longest line(%d):%s\n", max, longest);
  }

  return 0;
}

int get_line(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-2 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c != EOF || i != 0){
    s[i] = '\n';
    ++i;
  }
  s[i] = '\0';
  while(c != EOF && c != '\n'){
    c = getchar();
    ++i;
  }
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
