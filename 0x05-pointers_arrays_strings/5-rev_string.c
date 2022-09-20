#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverse string
 * @s: string parameter
 *
 * Return: Void
 */

void rev_string(char *s)
{
	char *str_copy;
	int i, j;

	str_copy = (char *) malloc(strlen(s) + 1);
	j = 0;
	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		str_copy[i] = s[j];
		j++;
	}
	str_copy[strlen(s)] = '\0';
	strcopy(s, str_copy);
}
