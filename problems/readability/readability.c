#include <cs50.h> // get_char, get_string
#include <stdio.h>
#include <string.h> // strlen
#include <ctype.h>  // isalpha
#include <math.h>   // round

int main(void)
{
    // Get input text from user
    string text = get_string("Text: ");

    // Calculate total number of letters, words, and sentences from input
    int letters = 0;
    int words = 1;
    int sentences = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters += 1;
        }
        // if input character is a space (ASCII=32) increase word count
        else if (text[i] == 32)
        {
            if (letters == 0)
            {
                words -= 1;
            }
            words += 1;
        }
        // if input character is a ! (33)  OR . (46) OR ? (63)
        else if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            if (letters == 0)
            {
                sentences += 0;
            }
            sentences += 1;
        }
    }
    // printf("Letters: %i\n", letters);
    // printf("Words: %i\n", words);
    // printf("Sentences: %i\n", sentences);
    // printf("\n");

    // Calculate average number of letters and sentences per 100 words
    float mult = 100.00 / words;
    float avg_let = mult * letters;
    float avg_sent = mult * sentences;
    // printf("%f\n", mult);
    // printf("Avg Letters per 100 words: %f\n", avg_let);
    // printf("Avg Sentences per 100 words: %f\n", avg_sent);
    // printf("\n");

    // Calculate grade level using Coleman-Liau index
    float index = 0.0588 * avg_let - 0.296 * avg_sent - 15.8;
    double index_dbl = round(index);
    int index_int = (int)index_dbl;
    // printf("%i\n", index_int);
    if (index_int < 0)
    {
        printf("Before Grade 1\n");
    }
    else if (index_int > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index_int);
    }
}