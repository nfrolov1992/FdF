/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drow_menu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmalik <jmalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:31:00 by jmalik            #+#    #+#             */
/*   Updated: 2019/12/14 18:59:27 by jmalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void    ft_drow_menu(t_fdf p)
{
    char    *menu;

    menu = "Move picture: ";
	mlx_string_put(p.mlx, p.win, 15, 10, 0x039c35, menu);
	menu = "Up, Down, Left, Right";
	mlx_string_put(p.mlx, p.win, 15, 32, 0x039c35, menu);
	menu = "Mouse with the left button";
	mlx_string_put(p.mlx, p.win, 15, 54, 0x039c35, menu);	
	menu = "Z-scale:      8, 2";
	mlx_string_put(p.mlx, p.win, 15, 76, 0x039c35, menu);
	menu = "Rotation: Mouse right button, 4, 6";
	mlx_string_put(p.mlx, p.win, 15, 98, 0x039c35, menu);
	menu = "Reduce window size: A, Z";
	mlx_string_put(p.mlx, p.win, 15, 120, 0x039c35, menu);
	menu = "Increase window size: S, X";
	mlx_string_put(p.mlx, p.win, 15, 142, 0x039c35, menu);
	menu = "Full screen mode: F";
	mlx_string_put(p.mlx, p.win, 15, 164, 0x039c35, menu);
	menu = "Change color: Mouse middle button, Shift";
	mlx_string_put(p.mlx, p.win, 15, 186, 0x039c35, menu);
	menu = "3d/2d mode:   5, spase";
	mlx_string_put(p.mlx, p.win, 15, 208, 0x039c35, menu);
	menu = "Zoom: Mouse scroll, '+', '-'";
	mlx_string_put(p.mlx, p.win, 15, 230, 0x039c35, menu);
}