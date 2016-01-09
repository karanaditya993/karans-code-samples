#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float change;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int number_of_quarters;
    int number_of_dimes;
    int number_of_nickels;
    int number_of_pennies;
    int remaining_change;
    int number_of_coins;

    printf("O hai! ");
    do {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while (change <= 0);

    int converted_change = change * 100;

    // The round function allows for the numbers to be rounded down to their
    // nearest integer
    //
    // The modulo function gives the remainder, or the remaining amount of change
    // that must be dealt with

    number_of_quarters = round(converted_change / quarter);
    printf("Quarters: %i\n", number_of_quarters);
    remaining_change = converted_change % quarter;
    number_of_dimes = round(remaining_change / dime);
    printf("Dimes: %i\n", number_of_dimes);
    remaining_change = remaining_change % dime;
    number_of_nickels = round(remaining_change / nickel);
    printf("Nickels: %i\n", number_of_nickels);
    remaining_change = remaining_change % nickel;
    number_of_pennies = round(remaining_change / penny);
    printf("Pennies: %i\n", number_of_pennies);
    number_of_coins = number_of_quarters + number_of_dimes + number_of_nickels + number_of_pennies;
    printf("Total Number of Coins: %i\n", number_of_coins);

}