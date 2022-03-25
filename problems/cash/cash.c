#include <cs50.h>
#include <stdio.h>

// global functions
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
    return coins;
    // printf("\t%i quarters\n", quarters);
    // printf("\t%i dimes\n", dimes);
    // printf("\t%i nickel\n", nickels);
    // printf("\t%i pennies\n", pennies);
}

int get_cents(void)
{
    int cents;
    // prompting the user for a number of cents using get_int
    do
    {
        cents = get_int("Change owed: ");
    } while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = cents / 25;
    // printf("%i qtr\n", quarters);
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = cents / 10;
    // printf("%i dimes\n", dimes);
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = cents / 5;
    // printf("%i nickels\n", nickels);
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = cents / 1;
    // printf("%i pennies\n", pennies);
    return pennies;
}