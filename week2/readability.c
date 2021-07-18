#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentence(string text);

int main(void)
{
    string phrase = get_string("Text: ");

    // Count the number of characters, words and sentences
    int charcount = count_letters(phrase);
    int wordcount = count_words(phrase);
    int sentencecount = count_sentence(phrase);

    // Calculate the index
    float L;
    float S;
    float grade;
    string result;

    L = (float) charcount / wordcount * 100;
    S = (float) sentencecount / wordcount * 100;
    grade = (0.0588 * L) - (0.296 * S) - 15.8;

    // Assess the grade based on the index
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 1 && grade < 16)
    {
        printf("Grade %i\n", (int)round(grade));
    }
    else
    {
        printf("Grade 16+\n");
    }
}

// Function to calculate number of characters
int count_letters(string text)
{
    int count = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }

    return count;
}

// Function to calculate number of words
int count_words(string text)
{
    int count = 1;
    for (int i = 1, n = strlen(text); i <= n; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

// Function to calculate number of sentences
int count_sentence(string text)
{
    int count = 0;
    for (int i = 1, n = strlen(text); i <= n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}