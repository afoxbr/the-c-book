#include <stdio.h>

int main()
{
        int c;
        while ((c=getchar())!=EOF){
                putchar(c);
                printf("%1d\n",c);
                printf("%3d\n",EOF);
        }
}
