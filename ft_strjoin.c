/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:31:47 by mhiguera          #+#    #+#             */
/*   Updated: 2023/03/03 17:25:45 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		z;
	char	*s3;

	i = 0;
	j = 0;
	z = ft_strlen(s1) + ft_strlen(s2);
	s3 = ft_calloc(sizeof (char), z + 1);
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	return (s3);
}
/*
int main()
{
	printf("%s", ft_strjoin("manolo", "pepe"));
	return 0;
}
*/
