/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:14:09 by user42            #+#    #+#             */
/*   Updated: 2020/06/29 19:54:05 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

int		clgame(void *param)
{
	t_data *data;

	data = (t_data *)param;
	close_game(data);
	return (0);
}

void	close_game(t_data *data)
{
	int i;

	i = -1;
	while (++i < NB_HUD_TEX - NB_ANIM_TEX)
	{
		mlx_destroy_image(data->mlx_addrs, data->tab_tex[i].img.ad);
	}
	i = -1;
	while (++i < NB_ANIM_TEX)
		mlx_destroy_image(data->mlx_addrs,
		data->healanim.anim_texture[i].img.ad);
	i = -1;
	while (++i < NB_ANIM_TEX)
		mlx_destroy_image(data->mlx_addrs,
		data->shieldanim.anim_texture[i].img.ad);
	i = -1;
	while (++i < 4)
		mlx_destroy_image(data->mlx_addrs, data->menu_texture[i].img.ad);
	mlx_destroy_window(data->mlx_addrs, data->win_addrs);
	exit(0);
}

void	print_inventory2(t_data *data)
{
	if (data->inventory.slot_three != 0)
		mlx_put_image_to_window(data->mlx_addrs, data->win_addrs,
			data->tab_tex[11].img.ad, data->pos_texture[11].x,
			data->pos_texture[11].y);
}

int		load_texture_data(t_data *data)
{
	int i;

	fill_texture_tab(data);
	if (heal_texture_animation(data) == -1)
		return (-1);
	if (shield_texture_animation(data) == -1)
		return (-1);
	if (load_menu_texture(data) == -1)
		return (-1);
	i = -1;
	while (++i < NB_HUD_TEX - NB_ANIM_TEX)
	{
		if (!(data->tab_tex[i].img.ad =
		mlx_xpm_file_to_image(data->mlx_addrs, data->name_texture[i],
		&data->tab_tex[i].width, &data->tab_tex[i].height)))
			return (-1);
		data->tab_tex[i].img.tab =
		(int *)mlx_get_data_addr(data->tab_tex[i].img.ad,
		&(data->tab_tex[i].img.bits_per_pixel),
		&(data->tab_tex[i].img.size_line), &(data->tab_tex[i].img.endian));
	}
	return (1);
}
