/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:58:28 by mhiguera          #+#    #+#             */
/*   Updated: 2023/03/07 20:48:47 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	k = 0;
	if (dstsize <= j)
		return (dstsize + i);
	while ((src[k] != '\0') && (j + k < dstsize - 1))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j + k == dstsize && j < dstsize)
		dst[j + k - 1] = '\0';
	else
		dst[j + k] = '\0';
	return (j + i);
}
/*
int main()
{
//	char *str[90] = "manolo";
	char *dest;
//	str = "manolo";
	dest[10] = 'a;
    printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
    write(1, "\n", 1);
    write(1, dest, 15);
	return 0;
}*/
