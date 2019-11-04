/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 09:53:04 by amurtone          #+#    #+#             */
/*   Updated: 2019/11/04 15:32:25 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		get_next(char *path)
{
	int		fd;
	char	*line;
	int		result;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error in opening the file: ");
		ft_putendl(path);
		return (1);
	}
	while ((result = get_next_line(fd, &line)))
	{
		if (result == -1)
		{
			ft_putstr("Error getting next line in: ");
			ft_putendl(path);
			return (1);
		}
		ft_putendl(line);
		free(line);
	}
	if (close(fd) == -1)
	{
		ft_putstr("Error closing file: ");
		ft_putendl(path);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_putendl("Needs at least one file");
	while (i < argc)
	{
		if (get_next(argv[i++]))
			return (1);
	}
	while (1)
	{

	}
	return (0);
}
