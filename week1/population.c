#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int population_start;
    int population_end;
    int years = 0;

    do
    {
        population_start = get_int("Start size:\n");

    }
    while( population_start  < 9 );


    // TODO: Prompt for end size

    do
    {
        population_end = get_int("End size:\n");
    }
    while( population_end < population_start );

    // TODO: Calculate number of years until we reach threshold

    while( population_start < population_end)
    {
        population_start = population_start + population_start/3 - population_start/4;
        years++;

    }

    // TODO: Print number of years

    printf ("Years: %i\n",years);
}