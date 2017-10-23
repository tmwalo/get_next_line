/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:17:42 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:28:07 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*original_dest;

	original_dest = dest;
	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		++dest;
		++src;
		--n;
	}
	while (n > 0)
	{
		*dest = '\0';
		++dest;
		--n;
	}
	return (original_dest);
}
