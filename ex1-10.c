#include <stdio.h>

/*replace tabs, backspaces, and backslashes*/

int main()
{
    int c;

    while ((c = getchar()) != EOF){
        if (c == '\t' || c == '\b' || c == '\\'){
            if (c == '\t')
                printf("\\t");
            if (c == '\b')
                printf("\\b");
            if (c == '\\')
                printf("\\\\");
        }
        else
            putchar(c);
    }
    printf("\n");
}