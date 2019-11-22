/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprovolo <fprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:02:37 by fprovolo          #+#    #+#             */
/*   Updated: 2019/11/22 15:09:50 by fprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main(int argc, char **argv)
{
	char    *points;
	int     fd;

	if (argc == 2)
		if ((fd = open(argv[1], O_RDONLY)) > 0)
		{
			points = fdf_read_map(fd);
			close(fd);
		}
		else
			ft_putendl("File error");
	else
		ft_putendl("Usage: ./fdf map_filename");
	return (0);
}