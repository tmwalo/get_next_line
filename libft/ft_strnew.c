/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:08:29 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:29:52 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_memset(str, '\0', sizeof(*str) * (size + 1));
	return ((char *)str);
}
