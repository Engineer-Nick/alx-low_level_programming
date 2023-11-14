#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* count_words - child function to count number of words in a string
* @k: string to evaluate
* Return: total words counted
*/
void print_tab(char **tab)
{
    int k;

    for (k = 0; tab[k] != NULL; ++k)
    {
        printf("%s\n", tab[k]);
    }
}

/**
 * main - check the code for ALX
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School  student Mavine        #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
