#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

string converttocypher(string plaintext, int key);
int main(int argc, string argv[])
{
    string plaintext;
    string cyphertext;

    // Checking number of arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Checking for valid integer argument
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {

        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Converting the argument to integer
    int key = atoi(argv[1]);
    // Prompt user for plain text string
    plaintext = get_string("\nplaintext: ");
    // Call the function to create ciphertext
    cyphertext = converttocypher(plaintext, key);



}

// Funtcion to shift the plaintext to ciphertext
string converttocypher(string plaintext, int key)
{
    printf("\nciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            //printf ("%c", (plaintext[i] + key -65) % 26);

            if (isupper(plaintext[i]))
            {
                printf("%c", ((((plaintext[i] + key) - 65)) % 26) + 65);
            }
            else if (islower(plaintext[i]))
            {
                printf("%c", ((((plaintext[i] + key) - 97)) % 26) + 97);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}