#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: String to be capitalized.
 * Return: pointer to capitalized string.
 */

char *cap_string(char *str)
{
	int ct = 0;
	int i, tmp;
	int spct = 13;
	char sp[] = {32, 9, '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[ct])
	{
		i = 0;

		while (i < spct)
		{
			tmp = ct - 1;
			if ((ct == 0 || str[tmp] == sp[i]) && (str[ct] >= 97 && str[ct] <= 122))
				str[ct] -= 32;
			i++;
		}

		ct++;

	}

	return (str);
}
