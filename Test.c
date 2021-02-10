#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main () 
{
        srand(time(0)); //initalize random number generator
        int max_num = 500;
        int min_mun = 0;
        int i = 0; /*input*/
        int num = rand() % (max_num + 1 - min_mun) + min_mun; /*generate random number within range with formula: rand % (max_num + 1 - min_mun) + max_num*/
        
        printf("Hello, this is a test program to familiar myself with C code!\n");
        printf("Here's a little number guessing game.\n");
        printf("Please only input numbers\n"); /*no safety checks as this is a test program.*/    

        while(1)
        {
                printf("\nInput a number: ");
                scanf("%d", &i);

                if (i < num)
                {
                        printf("\nHigher!\n");
                }
                else if (i > num)
                {
                        printf("\nLower!\n");
                }
                else
                {
                        printf("\nYou got it!\n");
                        return 0;
                }
        }

       return 0;
}