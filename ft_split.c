/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:52:49 by mhiguera          #+#    #+#             */
/*   Updated: 2023/03/11 19:00:58 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != '\0')
	{
		if ((i == 0) || (s[i] != c && s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	ft_free_array(char **str, int word)
{
	while (word > 0)
	{
		free(str[word]);
		word--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	i = 0;
	word = 0;
	if (!s)
		return (NULL);
	str = ft_calloc(sizeof (char *), (ft_count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && word < ft_count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		str[word++] = ft_substr(s, j, (i - j));
	}
	if (!str)
		ft_free_array(str, ft_count_words(s, c));
	return (str);
}
/*
int main()
{
	int i;
	char **result;

	i = 0;
	result = ft_split("", euismod non, mi.", 'z');

	while (result[i])
	{	
		printf("%s%c", result[i], '\n');
		i++;
	}
	
	
		printf("%s%c", result[i], '\n');
	//	printf("%s%c", result[1], '\n');
//	printf("%d", ft_count_words("   split       this for   me  !     ", ' '));
	return 0;
}
*/
