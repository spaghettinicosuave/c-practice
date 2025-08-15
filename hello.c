/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {

        case 'K':
        case 'J':
        case 'Q':
            val = 10;
            break;
       default:
            val = atoi(card_name);
            break;
    }
    /* Check if the value is 3 to 6 */
    if ((val >= 3) && (val <= 6)) {
        puts("Count has gone up");
    /* Otherwise check if the card was 10, J, Q, or K */
    }   else if (val >= 10) {
        puts("Count has gone down");
    }
    return 0;
}


