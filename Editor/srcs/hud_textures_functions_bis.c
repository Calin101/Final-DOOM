/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud_textures_functions_bis.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 15:51:10 by Polcito           #+#    #+#             */
/*   Updated: 2020/06/29 19:52:00 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "doom_editor.h"

int		wall_brick_texture(int x, int y, t_file *file)
{
	file->name_texture[21] = "image/case_doom_brick_wall.xpm";
	file->position_texture[21] = (t_dot){.x = x, .y = y};
	if (!(file->image[21].wall_stone = mlx_xpm_file_to_image(file->mlx_ptr,
	file->name_texture[21], &file->image[21].width, &file->image[21].height)))
		return (0);
	file->image[21].str_image = mlx_get_data_addr(file->image[21].wall_stone,
	&file->image[21].bpp, &file->image[21].s_l, &file->image[21].endian);
	mlx_put_image_to_window(file->mlx_ptr, file->win_ptr,
	file->image[21].wall_stone, file->position_texture[21].x,
	file->position_texture[21].y);
	return (1);
}

int		spawn_green_start(int x, int y, t_file *file)
{
	file->name_texture[25] = "image/case_doom_green_spawn.xpm";
	file->position_texture[25] = (t_dot){.x = x, .y = y};
	if (!(file->image[25].wall_stone = mlx_xpm_file_to_image(file->mlx_ptr,
	file->name_texture[25], &file->image[25].width, &file->image[25].height)))
		return (0);
	file->image[25].str_image = mlx_get_data_addr(file->image[25].wall_stone,
	&file->image[25].bpp, &file->image[25].s_l, &file->image[25].endian);
	mlx_put_image_to_window(file->mlx_ptr, file->win_ptr,
	file->image[25].wall_stone, file->position_texture[25].x,
	file->position_texture[25].y);
	return (1);
}

int		spawn_red_end(int x, int y, t_file *file)
{
	file->name_texture[27] = "image/case_doom_red_spawn.xpm";
	file->position_texture[27] = (t_dot){.x = x, .y = y};
	if (!(file->image[27].wall_stone = mlx_xpm_file_to_image(file->mlx_ptr,
	file->name_texture[27], &file->image[27].width, &file->image[27].height)))
		return (0);
	file->image[27].str_image = mlx_get_data_addr(file->image[27].wall_stone,
	&file->image[27].bpp, &file->image[27].s_l, &file->image[27].endian);
	mlx_put_image_to_window(file->mlx_ptr, file->win_ptr,
	file->image[27].wall_stone, file->position_texture[27].x,
	file->position_texture[27].y);
	return (1);
}

int		potion_heal(int x, int y, t_file *file)
{
	file->name_texture[29] = "image/case_heal_potion.xpm";
	file->position_texture[29] = (t_dot){.x = x, .y = y};
	if (!(file->image[29].wall_stone = mlx_xpm_file_to_image(file->mlx_ptr,
	file->name_texture[29], &file->image[29].width, &file->image[29].height)))
		return (0);
	file->image[29].str_image = mlx_get_data_addr(file->image[29].wall_stone,
	&file->image[29].bpp, &file->image[29].s_l, &file->image[29].endian);
	mlx_put_image_to_window(file->mlx_ptr, file->win_ptr,
	file->image[29].wall_stone, file->position_texture[29].x,
	file->position_texture[29].y);
	return (1);
}

int		potion_mana(int x, int y, t_file *file)
{
	file->name_texture[31] = "image/case_mana_potion.xpm";
	file->position_texture[31] = (t_dot){.x = x, .y = y};
	if (!(file->image[31].wall_stone = mlx_xpm_file_to_image(file->mlx_ptr,
	file->name_texture[31], &file->image[31].width, &file->image[31].height)))
		return (0);
	file->image[31].str_image = mlx_get_data_addr(file->image[31].wall_stone,
	&file->image[31].bpp, &file->image[31].s_l, &file->image[31].endian);
	mlx_put_image_to_window(file->mlx_ptr, file->win_ptr,
	file->image[31].wall_stone, file->position_texture[31].x,
	file->position_texture[31].y);
	return (1);
}
