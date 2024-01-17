#include <stdio.h>

/*print a histogram of frequency of various characters in input*/

int main()
{
  int i, c, k;
  int nchar[36];
  char symstr[] = "abcdefghijklmnopqrstuvwxyz1234567890";

        for (i = 0; i < 36; i++)
            nchar[i] = 0;

        while ((c = getchar()) != EOF){
            if (c == 'a' || c == 'A')
                ++nchar[0];
            else if (c == 'b' || c == 'B')
                ++nchar[1];
            else if (c == 'c' || c == 'C')
                ++nchar[2];
            else if (c == 'd' || c == 'D')
                ++nchar[3];
            else if (c == 'e' || c == 'E')
                ++nchar[4];
            else if (c == 'f' || c == 'F')
                ++nchar[5];
            else if (c == 'g' || c == 'G')
                ++nchar[6];
            else if (c == 'h' || c == 'H')
                ++nchar[7];
            else if (c == 'i' || c == 'I')
                ++nchar[8];
            else if (c == 'j' || c == 'J')
                ++nchar[9];
            else if (c == 'k' || c == 'K')
                ++nchar[10];
            else if (c == 'l' || c == 'L')
                ++nchar[11];
            else if (c == 'm' || c == 'M')
                ++nchar[12];
            else if (c == 'n' || c == 'N')
                ++nchar[13];
            else if (c == 'o' || c == 'O')
                ++nchar[14];
            else if (c == 'p' || c == 'P')
                ++nchar[15];
            else if (c == 'q' || c == 'Q')
                ++nchar[16];
            else if (c == 'r' || c == 'R')
                ++nchar[17];
            else if (c == 's' || c == 'S')
                ++nchar[18];
            else if (c == 't' || c == 'T')
                ++nchar[19];
            else if (c == 'u' || c == 'U')
                ++nchar[20];
            else if (c == 'v' || c == 'V')
                ++nchar[21];
            else if (c == 'w' || c == 'W')
                ++nchar[22];
            else if (c == 'x' || c == 'X')
                ++nchar[23];
            else if (c == 'y' || c == 'Y')
                ++nchar[24];
            else if (c == 'z' || c == 'Z')
                ++nchar[25];
            else if (c == '1')
                ++nchar[26];
            else if (c == '2')
                ++nchar[27];
            else if (c == '3')
                ++nchar[28];
            else if (c == '4')
                ++nchar[29];
            else if (c == '5')
                ++nchar[30];
            else if (c == '6')
                ++nchar[31];
            else if (c == '7')
                ++nchar[32];
            else if (c == '8')
                ++nchar[33];
            else if (c == '9')
                ++nchar[34];
            else if (c == '0')
                ++nchar[35];
	    else
	      continue;
        }

	
	
	for (i = 0; i < 36; i++){
	  printf("%c ", symstr[i]);
	  for (k = 0; k < nchar[i]; k++){
	    printf("*  ");
	  }
	  printf("\n");
	}
	
	printf("  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20\n");
	
        return 0;
}
