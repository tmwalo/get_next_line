/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:16:39 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:23:12 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(sizeof(*dup) * (ft_strlen(s) + 1));
	if (dup != NULL)
		ft_strcpy(dup, s);
	return (dup);
}
