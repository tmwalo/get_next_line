/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 01:52:48 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 15:30:20 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		count;
	char	*char_big;
	char	*max_char_big;

	char_big = (char *)big;
	if (ft_strlen(little) == 0)
		return (char_big);
	max_char_big = char_big + (len - ft_strlen(little)) + 1;
	count = 0;
	while ((*char_big != '\0') && (char_big < max_char_big))
	{
		while ((*char_big == *little) && (*little != '\0'))
		{
			++char_big;
			++little;
			++count;
		}
		char_big = char_big - count;
		if ((count > 0) && (*little == '\0'))
			return (char_big);
		little = little - count;
		count = 0;
		++char_big;
	}
	return (NULL);
}
