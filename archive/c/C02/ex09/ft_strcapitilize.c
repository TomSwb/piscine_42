#include <stdio.h>
#include <string.h>
/*
Returns a capitilised version of each words a string
(define by being alphanumerical chains)
 */
char	*ft_strcapitilize(char *str)
{	
	int	i;
	int	capneed;

	i = 0;
	capneed = 1;
	while (str[i] != '\0')
	{
		if (capneed == 1 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			capneed = 0;
		}
		else if ((str[i] < 97 || str[i] > 122)
			&& (str[i] < 65 || str[i] > 90)
			&& (str[i] < 48 || str[i] > 57))
			capneed = 1;
		if (str[i] >= 48 && str[i] <= 57)
			capneed = 0;
		i++;
	}
}

int	main(void)
{
	char	result[] = "hi, how are you? 42words forty-two; fifty+and+one";

	ft_strcapitilize(result);
	printf("%s", result);
	return (0);
}
