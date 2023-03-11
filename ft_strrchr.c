/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:25:05 by mhiguera          #+#    #+#             */
/*   Updated: 2023/03/11 18:24:14 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (((char *)s) + i);
		i--;
	}
	return (NULL);
}
/*int main()
{
	printf("%s%c", strrchr("manolo", 'n'), '\n');
	printf("%s", ft_strrchr("manolo", 'n'));
	return 0;
}*/
