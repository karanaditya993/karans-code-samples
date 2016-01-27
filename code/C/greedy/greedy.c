#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define quarter 25
#define dime 10
#define nickel 5

int main(void) {
    float change;
    int number_of_quarters, number_of_dimes, number_of_nickels, remaining_change, number_of_coins, converted_change;

    printf("O hai! ");
    do {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while (change <= 0);

    // Must convert your change to cents
    converted_change = (int) round(change * 100);

    // The round function allows for the numbers to be rounded down to their
    // nearest integer
    //
    // The modulo function gives the remainder, or the remaining amount of change
    // that must be dealt with

    number_of_quarters = converted_change / quarter;
    remaining_change = converted_change % quarter;

    number_of_dimes = remaining_change / dime;
    remaining_change = remaining_change % dime;

    number_of_nickels = remaining_change / nickel;
    remaining_change = remaining_change % nickel;

    number_of_coins = number_of_quarters + number_of_dimes + number_of_nickels + remaining_change;

    printf("%i\n", number_of_coins);

}
