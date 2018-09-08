/*
 * traffic.c
 *
 *  Created on: 08-Sep-2018
 *      Author: vamshi
 */


/*
 * traffic.c
 *
 *  Created on: 08-Sep-2018
 *      Author: vamshidhar
 */

#include <stdio.h>

int main ()
{
   char colour;

   /* ask user for colour */
   printf ("Enter the colour of the light (R,G,Y,A) : ");fflush(stdout);
   scanf ("%c", &colour);

   /* test the alternatives */
   switch (colour)
   {
       /* red light */
       case 'R':
       case 'r':
                 printf ("STOP! \n");
                 break;

       /* yellow or amber light */
       case 'Y':
       case 'y':
       case 'A':
       case 'a':
                 printf ("CAUTION! \n");
                 break;

       /* green light */
       case 'G':
       case 'g':
                 printf ("GO! \n");
                 break;

       /* other colour */
       default:
                 printf ("The colour is not valid.\n"); exit(0);
   }

   return (0);
}

