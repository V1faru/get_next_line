/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:21:06 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/24 12:21:08 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr++;
	}
	if (*ptr == '\0' && c == '\0')
		return ((char *)ptr);
	return (NULL);
}
