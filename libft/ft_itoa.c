/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:04:12 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:08:48 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		ft_count_digits(int n)
{
	int				ndigits;
	unsigned int	uns_n;

	if (n == 0)
		return (1);
	if (n < 0)
		uns_n = (unsigned int)((-1) * n);
	else
		uns_n = (unsigned int)n;
	ndigits = 0;
	while (uns_n > 0)
	{
		++ndigits;
		uns_n = uns_n / 10;
	}
	return (ndigits);
}

char			*ft_itoa(int n)
{
	int				sign;
	int				digits_and_sign;
	int				i;
	char			*str_of_int;
	unsigned int	uns_n;

	if ((sign = n) < 0)
	{
		n = (-1) * n;
		digits_and_sign = ft_count_digits(n) + 1;
	}
	else
		digits_and_sign = ft_count_digits(n);
	uns_n = (unsigned int)n;
	str_of_int = ft_strnew(digits_and_sign);
	if (str_of_int == NULL)
		return (NULL);
	i = digits_and_sign - 1;
	str_of_int[i--] = (uns_n % 10) + '0';
	while ((uns_n = uns_n / 10) > 0)
		str_of_int[i--] = (uns_n % 10) + '0';
	if (sign < 0)
		str_of_int[i] = '-';
	return (str_of_int);
}
