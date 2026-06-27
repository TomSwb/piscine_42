#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;
	unsigned int	len;

	i = 0;
	len = 0;
	if (dest > 0)
		{
			§
		}
//	while (src[i] != '\0')
//	{
//		dest[i] = src[i];
//		i++;
//		len++;
//	}
//	if (size != 0 && dest[i] != size) 
//	{
//			dest[i] = '\0';
//			i++;
//	}
//	return (len);
}

int	main(void)
{
	char	src[] = "Hello world!";
	char	dest[98983];
	size_t	result;
	size_t	resultorg;

	result = ft_strlcpy(dest, src, sizeof(dest));
	printf("%zu\n", result);
	resultorg = strlcpy(dest, src, sizeof(dest));
	printf("%zu", result);
	return (0);
}
