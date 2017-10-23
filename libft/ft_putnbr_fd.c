/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:04:53 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:19:09 by tmwalo           ###   ########.fr       */
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

static int		ft_count_digits_and_sign(int n)
{
	int		sign;
	int		digits_and_sign;

	if ((sign = n) < 0)
		digits_and_sign = ft_count_digits(n) + 1;
	else
		digits_and_sign = ft_count_digits(n);
	return (digits_and_sign);
}

static void		ft_stack_mem_itoa(int n, char *s)
{
	int				sign;
	int				digits_and_sign;
	int				i;
	unsigned int	uns_n;

	digits_and_sign = ft_count_digits_and_sign(n);
	if ((sign = n) < 0)
		n = (-1) * n;
	uns_n = (unsigned int)n;
	i = digits_and_sign;
	s[i--] = '\0';
	s[i--] = (uns_n % 10) + '0';
	while ((uns_n = uns_n / 10) > 0)
		s[i--] = (uns_n % 10) + '0';
	if (sign < 0)
		s[i] = '-';
}

void			ft_putnbr_fd(int n, int fd)
{
	char	str[ft_count_digits_and_sign(n) + 1];

	ft_stack_mem_itoa(n, str);
	ft_putstr_fd(str, fd);
}
