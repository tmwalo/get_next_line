/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 10:14:41 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:42:07 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *nptr)
{
	int		conversion;
	int		sign;

	while ((*nptr == ' ') || (*nptr == '\t') || (*nptr == '\n') ||
	(*nptr == '\v') || (*nptr == '\f') || (*nptr == '\r'))
		++nptr;
	if (*nptr == '-')
		sign = -1;
	else
		sign = 1;
	if ((*nptr == '+') || (*nptr == '-'))
		++nptr;
	conversion = 0;
	while (ft_isdigit(*nptr))
	{
		conversion = (10 * conversion) + (*nptr - '0');
		++nptr;
	}
	return (sign * conversion);
}
