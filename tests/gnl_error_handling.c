/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_error_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 17:20:05 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/26 13:57:01 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	get_next_char(int fd);

int		main(void)
{
	char	*line;
	
	line = NULL;
	printf("fd: -99, line: NULL, return: %d\n", get_next_line(-99, NULL));
	printf("fd: -1, line: NULL, return: %d\n", get_next_line(-1, NULL));
	printf("fd: -10 000, line: NULL, return: %d\n", get_next_line(-10000, NULL));
	printf("fd: 1, line: NULL, return: %d\n", get_next_line(1, NULL));
	printf("fd: 99, line: NULL, return: %d\n", get_next_line(99, NULL));
	printf("fd: -99, line: &line, return: %d\n", get_next_line(-99, &line));
	printf("fd: -1, line: &line, return: %d\n", get_next_line(-1, &line));
	printf("fd: -10 000, line: &line, return: %d\n", get_next_line(-10000, &line));
	printf("fd: 42, line: &line, return: %d\n", get_next_line(42, &line));
	return (0);
}
