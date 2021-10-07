#include "Libft.h"

static char	**errorfree(char **out)
{
	unsigned int	i;

	i = 0;
	while (out[i])
		free(out[i++]);
	free(out);
	return (NULL);
}

static int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static int	wordsnum(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i]) && (s[i + 1] != c))
			words++;
		i++;
	}
	return (++words);
}

static char	*wordadd(char const *s, char c)
{
	char	*out;
	int		i;

	i = 0;
	out = (char *)malloc(sizeof(char) * (wordlen(s, c) + 1));
	if (!out)
		return ("NULL");
	while (s[i] != c && s[i])
	{
		out[i] = s[i];
		i++;
	}	
	out[i] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**out;

	i = 0;
	k = 0;
	out = (char **)malloc(sizeof(char *) * (wordsnum(s, c) + 1));
	if (!out)
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		out[k] = wordadd(&s[i], c);
		if (!out[k])
			return (errorfree(out));
		i += wordlen(&s[i], c);
		while (s[i] == c)
			i++;
		k++;
	}
	out[k] = NULL;
	return (out);
}