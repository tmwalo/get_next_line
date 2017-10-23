/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:46:09 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:26:12 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		len;
	const char	*original_s;

	original_s = s;
	while (*s != '\0')
		++s;
	len = (size_t)(s - original_s);
	return (len);
}
