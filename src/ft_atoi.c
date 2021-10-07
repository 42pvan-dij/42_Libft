#include "Libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	returnal;

	i = 0;
	count = 0;
	returnal = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
	str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		returnal = returnal * 10 + (str[i++] - 48);
	if (count == -1)
		returnal = -returnal;
	return (returnal);
}