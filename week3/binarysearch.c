#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int total = get_int("\nEnter the number of elements: \n");
    int haystack[total];
    int min;
    int max;
    int middle;

    for (int i=0; i < total; i++)
    {
        haystack[i] = get_int("\n Enter the Numbers in sorted manner:\n");
    }

    int needle = get_int("\n Enter the number to find: \n");
    min = 0;
    max = total-1;
    middle = (min+max)/2;

    while ( min <= max)
    {
        if ( haystack[middle] < needle)
        {
            min = middle + 1;
        }
        else if ( haystack[middle] == needle)
        {
            printf("Found!! \n");
            return 0;
        }
        else if (haystack[middle] > needle) {
            max = middle - 1;
        }


        middle  = (min + max)/2;

    }
    if ( min > max )
    {
        printf ("Not Found!! \n");
        return 1;
    }

}