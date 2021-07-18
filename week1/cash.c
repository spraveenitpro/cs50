#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // initialize the amount to check and the coins required
    float amount;
    int coins = 0;
    // prompt the user for positive change owed
    do
    {
        amount = get_float("\n Change owed: ");
    }
    while (amount <= 0);
    // concert the change owed to cents
    int cents = round(amount * 100);
    // check the number of quarters that can be given and increment the coins counter
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }
    // check the number of dimes that can be given and increment the coins counter
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }
    // check the number of pennies that can be given and increment the coins counter
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }
    // check the number of cents that can be given and increment the coins counter
    while (cents != 0)
    {
        cents = cents - 1;
        coins++;
    }




    printf("\n %i \n", coins);

}