/* Matthew Page
 *
 * CSCS1320 Fall 2014
 *
 * drat.c - "Don't Resist A Towel" a program that runs through 
 *          a string of characters and grabs the first letter 
 *          of each word and outputs that.
 *
 * */

#include <stdio.h>

int main()
{
    char input[50];
    char result[25];

    printf("Enter a string: ");
    fgets(input, 50, stdin);
    printf("You said: %s\n", input);

    return(0);
}
