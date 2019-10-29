/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:22:58 by amurtone          #+#    #+#             */
/*   Updated: 2019/10/24 12:21:42 by amurtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)s + len - 1;
	if (c == '\0')
	{
		ptr++;
		return (ptr);
	}
	while (len > 0)
	{
		if (*ptr == c)
			return (ptr);
		len--;
		ptr--;
	}
	return (NULL);
}
