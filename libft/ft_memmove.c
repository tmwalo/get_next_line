/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 12:42:31 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:14:40 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*char_src;
	char			*char_dest;

	char_src = (const char *)src;
	char_dest = (char *)dest;
	if (char_src < char_dest)
	{
		while (n-- > 0)
			char_dest[n] = char_src[n];
	}
	else
		ft_memcpy(char_dest, char_src, n);
	return (char_dest);
}
