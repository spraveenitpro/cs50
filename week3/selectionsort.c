#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int total = get_int("\nEnter the total number of elements: \n");
    int haystack[total];
    int temp;

    for (int i = 0; i < total; i++)
    {
        haystack[i] = get_int("\nEnter the elements to be sorted:\n");
    }

    printf("\nThe unsorted sequence is: ");
    for (int k = 0; k < total; k++)
    {
       printf("\t %i", haystack[k]);
    }

    for (int i = 0; i < total; i++)
    {

        for (int j = i + 1; j < total; j++ )
        {
            if (haystack[i] > haystack[j])
            {
                temp = haystack[i];
                haystack[i] = haystack[j];
                haystack[j] = temp;

            }
        }
    }
     printf("\n");
     printf("\nThe sorted sequence now is: ");
        for (int k = 0; k < total; k++)
        {
            printf("\t %i", haystack[k]);
        }
     printf("\n");
}