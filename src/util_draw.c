/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_draw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:55:26 by junykim           #+#    #+#             */
/*   Updated: 2022/05/04 18:13:08 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"
#include <math.h>

t_point	new_point(int x, int y, t_map *map)
{
	t_point	p;

	p.x = x;
	p.y = y;
	p.z = map->z_matrix[y][x];
	p.color = get_default_color(p.z, map);// have to change it
	return (p);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ft_abs(int a)
{
	if (a > 0)
		return (a);
	else
		return (-a);
}
