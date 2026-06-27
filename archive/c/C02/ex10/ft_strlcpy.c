#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	if (dest > 0)
	{
		while( src[len] != '\0')
		{
			if (len == size)
			{
				len--;
				break;
			}	
		dest[len] = src[len];
		len++;
		}
	}
	dest[len] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
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

void	test(int size)
{
	char	src[] = "Hello world!";
	char	dest[13];
	int	result;
	int	resultorg;

	result = ft_strlcpy(dest, src, size);
	printf("Mine: copied '%s', into '%s', length '%d\n'", src, dest, result);
	resultorg = strlcpy(dest, src, size);
	printf("OG: copied '%s', into '%s', length '%d\n'", src, dest, result);
}

int	main(void)
{
	test(19);
	test(13);
	test(10);
	test(1);
	test(0);
	test(4234534532);
	return (0);
}
