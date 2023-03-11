/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:50:08 by mhiguera          #+#    #+#             */
/*   Updated: 2023/03/08 17:52:17 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[j] && n > 1)
	{
		if (!s1[i] || !s2[j])
			return (0);
		i++;
		j++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}
/*
int main()
{
	printf("%d", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	return 0;
}
*/
