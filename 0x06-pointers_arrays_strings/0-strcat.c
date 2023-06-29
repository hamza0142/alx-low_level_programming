
#include "main.h"

char *_strcat(char *dest, char *src) 
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}	
	dest[i + j] = '\0';
	return (dest);
}

