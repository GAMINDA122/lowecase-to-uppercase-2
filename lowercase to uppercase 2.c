// read in a line of lowercase text and display it in uppercase
#include <stdio.h>
#include <ctype.h>
main( )
{
    char letter[80];
    int count, tag;

    printf("\t\t\t----------------- WELCOME  LOWAERCASE TO UPARCASE PROGRAMME ----------------------");

    printf("\n\n\nEnter your words : ");// enter the text
    for (count = 0; (letter[count] = getchar()) != '\n'; ++count);

    // tag the character count
    tag = count;
    // display the line in uppercase
    printf("\n\nYour output : ");
    for (count = 0; count < tag; ++count) {

        putchar(toupper(letter[count]));
    }

    printf("\n\n\n\t\t\t\t----------------- THANK YOU ------------------");

}
