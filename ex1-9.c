#include <stdio.h>

/*replace multiple blanks with single blanks*/

int main()
{
    int c,check;

    check = 0;

    while((c = getchar()) != EOF){
        if (c == ' '){
            if (check == 0){
                putchar(c);
                check = 1;
            } 
        } 
        if (c != ' '){
            putchar(c);
            check = 0;
        }
    }
    printf("\n");
}