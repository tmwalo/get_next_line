/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 11:41:34 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:13:50 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*char_src;
	char			*char_dest;
	void			*original_dest;

	original_dest = dest;
	char_src = (const char *)src;
	char_dest = (char *)dest;
	while (n > 0)
	{
		*char_dest = *char_src;
		++char_src;
		++char_dest;
		--n;
	}
	return (original_dest);
}
