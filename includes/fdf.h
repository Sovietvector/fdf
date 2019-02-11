/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanfred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 17:12:56 by cmanfred          #+#    #+#             */
/*   Updated: 2019/02/11 20:01:44 by cmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include "../libft/libft.h"

typedef struct	s_vector
{
	double		x;
	double		y;
	double		z;
	int			color;
}				t_vector;

typedef struct	s_map
{
	t_vector	**vectors;
	int			height;
	int			width;
}				t_map;

typedef struct	s_mlx
{
	t_map		*map;
	void		*init;
	void		*window;
}				t_mlx;

int             ft_mapread(int fd, t_map **map);

#endif
