#include <stdio.h>

#define IN 1
#define OUT 0

/*display histogram of word length in a file*/

int main()
{
        int c, i, k, m, state, nlett, wc;
        int nchar[20];

        state = 0;
        nlett = 0;
        wc = 0;

        for (i = 0; i < 20; ++i)
                nchar[i] = 0;

        while ((c = getchar()) != EOF){
               if (c == ' ' || c == '\n' || c == '\t'){
                state = OUT;
                ++nchar[nlett];
                nlett = 0;
                ++wc;
               } 
               else if (state == OUT){
                state = IN;
                nlett = 1;
               }
               else
                ++nlett;
        }

        printf("  Histogram of word length in file\n");
        for (i = 0; i < wc; ++i){
                for (k = 0; k < 20; ++k){
                        m = wc-i;
                        if (nchar[k] >= m)
                                printf("  *");
                        else
                                printf("   ");
                }
                ++i;
                putchar('\n');
        }
        printf("  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20\n");
        return 0;
}
