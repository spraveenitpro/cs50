#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int values[] = {45,12,21,5,13,3,90,33,56,77,43,33,37};
    int number = get_int("Enter number to find:\n");



    for (int i = 0, n = sizeof(values) / sizeof(int); i<n;i++)
    {
        if ( values[i] == number)
        {
            printf ("\n Number Found!! it was done in %i attempts!\n", i);
            return 0;
        }

    }
    printf ("\n Number not Found!!\n");
        return 1;
    }
