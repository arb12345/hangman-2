#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main()
{

    char *hangman[] = {"hello", "world", "equilibrium", "algorithms", "jazz", "muck", "handicap", "statisticians", "knee", "adenovirus", "infection", "alzheimer", "fibromyalgia", "zygomyosis", "",NULL};
    int x;
    puts("There is a list of 1-14 words");
    puts("Enter a number to select the word");
    scanf(" %d", &x);

    int y = strlen(hangman[x-1]);
    int i = 0;

    char array[y];
    char array1[y];
    memset(array1,'_',y);
    int count1 = 0;
    const char *ch = hangman[x-1];

    while(*ch)
    {

       array[i]  = *ch++;
       i++;
    }

    fflush(stdin);
    int count = 0;

        while(1)
        {
            printf("Enter a character\n");
            char input;

             scanf(" %c", &input);



           for(i=0;i<y;i++)
           {

            if( array[i] == input)
            {

               count ++;

                   array1[i] = input;
            }

            }

            for(i=0;i<y;i++)
            {

                    printf("%c ", array1[i]);

            }


           if(count == y)
           {
               printf("\nYou succeeded in solving the word\n");
               break;
           }

           count1++;
           if(count1 == 7)
           {
               printf("\n\nYou failed to solve the word\n");
               puts("You fail");
               break;
           }

        }





    return 0;
}



