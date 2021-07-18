#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // initialize the number of steps variable
    int number;
    // Start the while loop to ensure that the entered number is more than 1 and less than 8
    do
    {
        number = get_int("Enter the number of levels:\n");
    }
    while (number < 1 || number > 8);

    // Start the outer for loop to interate from 1 to the max number of the steps

    for (int i = 1; i <= number; i++)
    {
        // Start the inner loop to iterate the columns in the row
        for (int j = 1; j <= number; j++)
        {
            if (j  <= number - i)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}