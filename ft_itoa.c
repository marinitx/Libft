/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:42:11 by mhiguera          #+#    #+#             */
/*   Updated: 2023/03/07 18:01:24 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 1;
	if (n == -2147483647 - 1)
		return (11);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_to_positive(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	n2;

	n2 = ft_to_positive(n);
	str = ft_calloc(sizeof (char), ft_intlen(n) + 1);
	if (!str)
		return (NULL);
	if (n == -2147483647 - 1)
		n2 = 2147483648;
	if (n == 0)
		str[0] = '0';
	i = ft_intlen(n) - 1;
	while (i >= 0)
	{
		str[i] = n2 % 10 + 48;
		i--;
		n2 = n2 / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int main()
{
	int n = 0;
	printf("%s", ft_itoa(n));
	return 0;
}
*/
