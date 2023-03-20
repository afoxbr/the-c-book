#include <stdio.h>

/*count blanks, tabs, and newlines*/

int main()
{
    int c,nl,sp,tb;

    c = 0;
    nl = 0;
    tb = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++sp;
        if (c == '\t')
            ++tb;
    }
    printf("%d,%d,%d\n",nl,sp,tb);
}