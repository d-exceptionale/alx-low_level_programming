#include "main.h"

/**
  * rot13 - encoded string using rot14.
  * @stt: string to be crytoptapherweee
  *
  * Return: ...
  */
char *rot13(char *s)
{
	int a = 0;

	while (str[a])
	{
		while ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
		{
			if ((str[a] > 'm' && str[a] <= 'z') || (str[a] > 'M' && str[a] <= 'Z'))
			{
				str[a] -= 13;
				break;
			}

			str[a] += 13;
			break;
		}

		a++;
	}

	return (str);
}
