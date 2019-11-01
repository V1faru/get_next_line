/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:38:18 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/29 15:39:41 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
  static char	*str[MAX_FD];
  char 		*temp;
  char		buf[BUFF_SIZE + 1];
  int		ret;
  
  if (fd < 0 || line == NULL)
    return (-1);
  while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
    {
      buf[ret] = '\0';
      tmp = ft_strjoin(str[fd], buf);
      free(str[fd]);
      str[fd] = tmp;
      if (strchr(str[fd] == '\n'))
	break;
    }
  if (ret < 0)
    return (-1);
  else if (ret == 0 && str[fd] == NULL || str[fd][0] == '\0')
    return (0);
  return (1);
}
