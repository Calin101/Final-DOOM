/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:04:52 by beduroul          #+#    #+#             */
/*   Updated: 2020/06/27 14:00:46 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_itoa(int n)
{
	char			*res;
	int				i;
	unsigned int	tmp;

	i = ft_intsize(n);
	if (!(res = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	res[i] = '\0';
	if (n < 0)
	{
		tmp = -n;
		res[0] = '-';
	}
	else
		tmp = n;
	if (tmp == 0)
		res[0] = '0';
	while (tmp)
	{
		res[i - 1] = tmp % 10 + '0';
		tmp /= 10;
		i--;
	}
	return (res);
}
