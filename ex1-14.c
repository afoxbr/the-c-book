#include <stdio.h>

/*print a histogram of frequency of various characters in input*/

int main()
{
        int i, c;
        int nchar[36];

        for (i = 0; i < 36; ++i)
            nchar[i] = 0;

        while ((c = getchar()) != EOF){
            if (c == 'a')
                ++nchar[0];
            else if (c == 'b')
                ++nchar[1];
            else if (c == 'c')
                ++nchar[2];
            else if (c == 'd')
                ++nchar[3];
            else if (c == 'e')
                ++nchar[4];
        }

        return 0;
}
