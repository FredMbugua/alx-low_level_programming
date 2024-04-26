#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str);
char **allocate_memory(char *str, int words);
void free_memory(char **words);

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int words = count_words(str);
    char **result = allocate_memory(str, words);
    if (result == NULL)
        return NULL;

    int word_index = 0;
    while (*str)
    {
        if (*str != ' ')
        {
            int len = 0;
            while (str[len] != ' ' && str[len] != '\0')
                len++;

            result[word_index] = malloc((len + 1) * sizeof(char));
            if (result[word_index] == NULL)
            {
                free_memory(result);
                return NULL;
            }

            for (int i = 0; i < len; i++)
                result[word_index][i] = *str++;

            result[word_index][len] = '\0';
            word_index++;
        }
        else
        {
            str++;
        }
    }

    result[word_index] = NULL;
    return result;
}

int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ' && in_word)
            in_word = 0;
        else if (*str != ' ' && !in_word)
        {
            in_word = 1;
            count++;
        }

        str++;
    }

    return count;
}

char **allocate_memory(char *str, int words)
{
    char **result = malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    return result;
}

void free_memory(char **words)
{
    for (int i = 0; words[i] != NULL; i++)
        free(words[i]);

    free(words);
}
