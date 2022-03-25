#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // initializing integer variable h to zero
    int h = 0;

    // do while loop will run at least once
    do
    {
        // getting an input integer from the user
        //  re-prompted until while loop condition is met
        h = get_int("Height: ");

    } while (h < 1 || h > 8);
    // ^checking if the input from the user meets parameters
    //  params: integers between 1 and 8, inclusive

    // row
    for (int i = 1; i <= h; i++)
    {
        // calculating how many spaces are needed in order to right align each row
        int spaces = h - i;

        // while j is less than spaces print a space
        for (int j = 0; j < spaces; j++)
        {
            // printing spaces (one less than each row number)
            printf(" ");
        }

        // column
        // while k is less than i print a #
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        // once both for loops above have completed print a new line
        printf("\n");
    }
}