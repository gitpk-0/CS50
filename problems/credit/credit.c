#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get credit card number
    long card_number = get_long("Credit Card Number: ");

    int length;
    // Count length of card number
    //  length is saved as a variable
    for (length = 0; card_number > 0; length++)
    {
        // dividing the int card number by 10
        //      removes last digit with each iteration
        card_number = card_number / 10;
        // printf("%li\n", card_number);
    }
    // printf("Card num length = %i\n", length);

    // LENGTH CHECK
    // if length is not 13, 15, or 16: card is INVALID, return 0
    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        // exit code of 0 for invalid card numbers
        return 0;
    }

    // Checksum variables
    int sum1 = 0;
    int sum2 = 0;
    long x = card_number;
    int mod1, mod2, d1, d2;

    // calculating the checksum
    do
    {
        // add last digit to sum1 and remove
        mod1 = x % 10;
        x = x / 10;
        sum1 = sum1 + mod1;
    }
}

// 4003 6000 0000 0014 = 16
// 4003600000000014