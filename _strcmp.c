#include "shell.h"



int _strcmp(char *s1, char *s2)
{
	int i, j, a, b;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		/*printf("got into the _strcmp cycle");*/
		i++;
	}
	a = (s1[i] - '0');
	b = (s2[i] - '0');
	j = a - b;

	return (j);
}
