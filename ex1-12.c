#include <stdio.h>

/*print input one word per line*/

int main()
{
    int c;

    while ((c = getchar()) != EOF){
        if (c == '\n' || c == ' ')
            printf("\n");
        else if (c == '\t')
            continue;
        else
            putchar(c);
    }
}