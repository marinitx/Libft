/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:14:28 by mhiguera          #+#    #+#             */
/*   Updated: 2023/03/03 17:21:59 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	i = 0;
	while (s1[start] != '\0' && ft_check_char(s1[start], set) != '\0')
		start++;
	while (end > start && ft_check_char(s1[end], set) != '\0')
		end--;
	str = ft_calloc(sizeof(char), end - start + 1 + 1);
	if (!str)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	return (str);
}
/*int main()
{
	printf("%s", ft_strtrim("hola feo hola", "hola"));
	return 0;
}*/
