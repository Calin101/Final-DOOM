/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 18:10:49 by beduroul          #+#    #+#             */
/*   Updated: 2020/06/27 14:04:20 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strnchr(char *str, char c)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}