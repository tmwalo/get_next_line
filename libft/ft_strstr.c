/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:34:38 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:31:44 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		count;
	char	*char_haystack;

	char_haystack = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (char_haystack);
	count = 0;
	while (*char_haystack != '\0')
	{
		while ((*char_haystack == *needle) && (*needle != '\0'))
		{
			++char_haystack;
			++needle;
			++count;
		}
		char_haystack = char_haystack - count;
		if ((count > 0) && (*needle == '\0'))
			return (char_haystack);
		needle = needle - count;
		count = 0;
		++char_haystack;
	}
	return (NULL);
}
