/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:48:41 by beduroul          #+#    #+#             */
/*   Updated: 2020/06/29 20:23:28 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putendl_hexa(char *str, t_putstr_style type, u_int32_t color)
{
	if (type & UNDERLINE)
		ft_putstr("\033[4m");
	if (type & ITALIC)
		ft_putstr("\033[3m");
	if (type & BOLD)
		ft_putstr("\033[1m");
	ft_putstr("\033[38;2;");
	ft_putnbr((color >> 16) & 0xFF);
	ft_putchar(';');
	ft_putnbr((color >> 8) & 0xFF);
	ft_putchar(';');
	ft_putnbr((color) & 0xFF);
	ft_putchar('m');
	ft_putendl(str);
	ft_putstr("\033[0m");
}
